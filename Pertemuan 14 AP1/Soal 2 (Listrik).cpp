#include <iostream>

int main() {
    // Kondisi daya rumah
    int dayaRumah = 3; // Misalnya, daya rumah 2200 VA (gunakan nomor kondisi 3)

    // Biaya per Kwh sesuai kondisi daya
    int biayaPerKwh;
    switch (dayaRumah) {
        case 1:
            biayaPerKwh = 1350;
            break;
        case 2:
            biayaPerKwh = 1440;
            break;
        case 3:
            biayaPerKwh = 1450;
            break;
        case 4:
            biayaPerKwh = 1500;
            break;
        default:
            std::cout << "Kondisi daya tidak valid." << std::endl;
            return 1;
    }

    // Rincian penggunaan listrik per hari
    int ac = 800;
    int kulkas = 200;
    int strika = 150;
    int mesinCuci = 250;
    int lampu = 250;
    int lainnya = 100;

    // Jumlah total penggunaan listrik per hari
    int totalHarian = ac + kulkas + strika + mesinCuci + lampu + lainnya;

    // Jumlah total penggunaan listrik per bulan (30 hari)
    int totalBulanan = totalHarian * 30;

    // Biaya pembayaran listrik per bulan
    int biayaBulanan = totalBulanan * biayaPerKwh / 1000;

    std::cout << "Biaya pembayaran listrik per bulan: Rp. " << biayaBulanan << std::endl;

    return 0;
}
