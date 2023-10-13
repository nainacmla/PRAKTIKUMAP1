#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int permalam = 100.000;
  double disk1 = 0.10;
  double disk2 = 0.20;
  double disk3 = 0.30;
  double disk_tambahan = 0.05;
  double diskon;
  double biakmr, pjkkmr;
  int jmlhkmr, jmlhhri;

  cout << "Masukkan biaya sewa satu kamar: $";
  cin >> biakmr;

  cout << "Masukkan jumlah kamar yang dipesan: ";
  cin >> jmlhkmr;

  cout << "Masukkan jumlah hari pemesanan kamar: ";
  cin >> jmlhhri;

  cout << "Masukkan pajak penjualan (dalam persen): ";
  cin >> pjkkmr;

  if (jmlhkmr >= 10 && jmlhkmr < 20) {
    diskon = disk1;
  } else if (jmlhkmr >= 20 && jmlhkmr < 30) {
    diskon = disk2;
  } else if (jmlhkmr >= 30) {
    diskon = disk3;
  }
  if (jmlhhri >= 3) {
    diskon += disk_tambahan;
  }
  double Tbiakmr = jmlhkmr * permalam * (1 - diskon);
  double Tpajak = Tbiakmr * (pjkkmr / 100);
  double Ttagih = Tbiakmr + Tpajak;

  cout << "==== Rincian Tagihan ====" << endl;
  cout << "Biaya sewa satu kamar :$" << permalam << endl;
  cout << "Diskon setiap kamar dalam persen" << diskon * 100 << "%" << endl;
  cout << "Jumlah kamar yang di pesan : " << jmlhkmr << endl;
  cout << "Jumlah hari pemesanan" << jmlhhri << endl;
  cout << "Total Biaya Kamar :$" << Tbiakmr << endl;
  cout << "Pajak penjualan :$" << Tpajak << endl;
  cout << "Total jumlah tagihan :$" << Ttagih << endl;

  return 0;
}