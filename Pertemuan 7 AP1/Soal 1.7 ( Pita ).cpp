#include <iostream>
using namespace std;

int meterToCentimeter(int meter) {
  return meter * 100;
}

int centimeterToMeter(int centimeter) {
  return centimeter / 100;
}

int main() {
  int pitaMeter = 12;
  int pitaCentimeter = meterToCentimeter(pitaMeter);

  int panjangIkatan = 45;
  int jumlahIkatan = pitaCentimeter / panjangIkatan;
  int sisaPitaCentimeter = pitaCentimeter % panjangIkatan;

  cout << "Jumlah ikatan bunga rangkai yang dapat dibuat: " << jumlahIkatan << endl;
  cout << "Sisa pita yang belum dipakai (dalam cm): " << sisaPitaCentimeter << endl;

  return 0;
}