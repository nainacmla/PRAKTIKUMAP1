#include <iostream>
#include <map>

using namespace std;

// Fungsi untuk menghitung total bonus
int hitungTotalBonus(map<string, map<string, int>> penjualan) {
    int totalBonus = 0;

    for (auto const &entry : penjualan) {
        string namaKaryawan = entry.first;
        map<string, int> penjualanKaryawan = entry.second;

        for (auto const &penjualanTipe : penjualanKaryawan) {
            string tipeRumah = penjualanTipe.first;
            int jumlahTerjual = penjualanTipe.second;

            int bonus = 0;

            if (jumlahTerjual > 5) {
                if (tipeRumah == "45") {
                    bonus = 500000;
                } else if (tipeRumah == "54") {
                    bonus = 1000000;
                } else if (tipeRumah == "70") {
                    bonus = 1250000;
                }
            } else if (jumlahTerjual >= 1) {
                if (tipeRumah == "45") {
                    bonus = 250000;
                } else if (tipeRumah == "54") {
                    bonus = 500000;
                } else if (tipeRumah == "70") {
                    bonus = 1000000;
                }
            }

            totalBonus += (bonus * jumlahTerjual);
        }
    }

    return totalBonus;
}

int main() {
    // Input penjualan rumah oleh karyawan
    map<string, map<string, int>> penjualanKaryawan;
    penjualanKaryawan["ARIF"]["45"] = 1;
    penjualanKaryawan["ARIF"]["70"] = 6;

    // Menghitung total bonus karyawan
    int totalBonus = hitungTotalBonus(penjualanKaryawan);

    cout << "Total Bonus yang diterima ARIF = Rp. " << totalBonus << endl;

    return 0;
}