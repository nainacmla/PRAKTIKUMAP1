/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <algorithm>

struct DataAnak {
    std::string Nama;
    int Tanggal;
    int Bulan;
    int Tahun;
};

bool compareByYear(const DataAnak &a, const DataAnak &b) {
    return a.Tahun > b.Tahun;
}

int main() {
    const int jumlahData = 20;
    DataAnak dataAnak[jumlahData];

    // Simulasi pembacaan data anak secara acak
    // (Anda dapat mengganti ini dengan input dari pengguna atau membaca dari file)
    for (int i = 0; i < jumlahData; ++i) {
        std::cout << "Masukkan data anak ke-" << i + 1 << ":\n";
        std::cout << "Nama: ";
        std::cin >> dataAnak[i].Nama;
        std::cout << "Tanggal lahir (DD MM YYYY): ";
        std::cin >> dataAnak[i].Tanggal >> dataAnak[i].Bulan >> dataAnak[i].Tahun;
    }

    // Tampilkan data sebelum diurutkan
    std::cout << "\nData sebelum diurutkan:\n";
    for (const auto &anak : dataAnak) {
        std::cout << anak.Nama << " - " << anak.Tanggal << " " << anak.Bulan << " " << anak.Tahun << "\n";
    }

    // Urutkan data berdasarkan tahun lahir dari tertua sampai termuda
    std::sort(dataAnak, dataAnak + jumlahData, compareByYear);

    // Tampilkan data setelah diurutkan
    std::cout << "\nData setelah diurutkan berdasarkan tahun lahir:\n";
    for (const auto &anak : dataAnak) {
        std::cout << anak.Nama << " - " << anak.Tanggal << " " << anak.Bulan << " " << anak.Tahun << "\n";
    }

    // Cari dan tampilkan data anak yang tahun lahirnya 2022
    std::cout << "\nData anak yang tahun lahirnya 2022:\n";
    for (const auto &anak : dataAnak) {
        if (anak.Tahun == 2022) {
            std::cout << anak.Nama << " - " << anak.Tanggal << " " << anak.Bulan << " " << anak.Tahun << "\n";
        }
    }

    return 0;
}