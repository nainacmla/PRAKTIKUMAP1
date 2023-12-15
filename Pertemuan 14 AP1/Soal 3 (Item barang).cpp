#include <iostream>
#include <string>
using namespace std;

int main() {
    string namaItem[10] = {"Item 1", "Item 2", "Item 3"}; // Definisikan variabel dan tipe data untuk menyimpan data barang penjualan
    double hargaPerItem[10] = {5000, 6000, 15000}; // Input Data harga setiap item barang
    int jumlahTerjual[10]; // Input jumlah terjual untuk setiap item barang

    // Input data jumlah penjualan barang untuk setiap itemnya
    for (int i = 0; i < 3; i++) {
        cout << "Masukkan jumlah terjual untuk " << namaItem[i] << ": ";
        cin >> jumlahTerjual[i];
    }

    // Hitung total penjualan Minimarket setiap harinya
    double totalPenjualan = 0;
    for (int i = 0; i < 3; i++) {
        double totalItem = hargaPerItem[i] * jumlahTerjual[i];
        totalPenjualan += totalItem;
    }

    // Menampilkan total penjualan
    cout << "Total penjualan pada suatu hari adalah Rp." << totalPenjualan << endl;

    // Pilih item mana yang paling banyak terjual (laku)
    int maxTerjual = 0;
    int indexMaxTerjual = 0;
    for (int i = 0; i < 3; i++) {
        if (jumlahTerjual[i] > maxTerjual) {
            maxTerjual = jumlahTerjual[i];
            indexMaxTerjual = i;
        }
    }

    cout << "Item yang paling laku adalah " << namaItem[indexMaxTerjual] << " (Item " << indexMaxTerjual + 1 << ")" << endl;

    return 0;
}
