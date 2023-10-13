#include <iostream>
#include <math.h>
using namespace std;

int main() {
  double panjang, lebar, margin_atas, margin_bawah, margin_kanan, margin_kiri;
  double ukuran_titik;
  char spasi;
  double panjang_efektif = panjang - margin_atas - margin_bawah;
  double lebar_efektif = lebar - margin_kiri - margin_kanan;
  int jumlah_karakter = static_cast<int>(lebar_efektif / ukuran_titik);
  int jmlh_baris = static_cast<int>(panjang / ukuran_titik);
  cout << "Masukkan panjang kertas (inci): ";
  cin >> panjang;

  cout << "Masukkan lebar kertas (inci): ";
  cin >> panjang;

  cout << "Masukkan margin atas (inci): ";
  cin >> panjang;

  cout << "Masukkan margin bawah (inci): ";
  cin >> panjang;

  cout << "Masukkan margin kiri (inci): ";
  cin >> panjang;

  cout << "Masukkan margin kanan (inci): ";
  cin >> panjang;

  cout << "Masukkan ukuran titik pada garis (inci): ";
  cin >> panjang;

  cout << "Spasi yang di berikan ganda? (y/n): ";
  cin >> panjang;

  if (spasi == 'y' || spasi == 'Y') {
    ukuran_titik *= 2;
  }
  cout << "\n ===== Hasil Perhitungan =====" << endl;
  cout << "Jumlah karakter dalam satu baris: " << jumlah_karakter << endl;
  cout << "Jumlah baris yang dapat di cetak: " << jmlh_baris << endl;

  return 0;
}