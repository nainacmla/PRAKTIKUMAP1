#include <iostream>
using namespace std;

struct Barang {
    string kode;
    string nama;
    int jumlah;
    int hargaSatuan;
};

int main() {
    Barang penjualan[20] = {
        {"BJ001", "Baju Kemeja", 4, 100000},
        {"BJ002", "Baju Tunik", 7, 200000},
        {"Sp001", "Sepatu Pria", 10, 500000},
        
    };

    int totalHarga = 0;
    for (int i = 0; i < 20; i++) {
        totalHarga += penjualan[i].jumlah * penjualan[i].hargaSatuan;
    }

    double keuntungan = 0.1 * totalHarga;

    cout << "Total harga penjualan: Rp." << totalHarga << endl;
    cout << "Keuntungan: Rp." << keuntungan << endl;

    return 0;
}