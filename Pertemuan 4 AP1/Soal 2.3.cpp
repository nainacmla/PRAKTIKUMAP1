#include <iostream>
#include <string>
using namespace std;

float hitungNilaiAkhir(float nilaiTes, float nilaiUTS, float nilaiUAS, float nilaiTugas) {
    return 0.2 * nilaiTes + 0.3 * nilaiUTS + 0.3 * nilaiUAS + 0.2 * nilaiTugas;
}

string konversiNilaiIndeks(float nilaiAkhir) {
    string nilaiIndeks = "";
    if (nilaiAkhir <= 50) {
        nilaiIndeks = "D";
    } else if (nilaiAkhir <= 70) {
        nilaiIndeks = "C";
    } else if (nilaiAkhir <= 80) {
        nilaiIndeks = "B";
    } else {
        nilaiIndeks = "A";
    }
    return nilaiIndeks;
}

int main() {
    float nilaiTes, nilaiUTS, nilaiUAS, nilaiTugas;
    cout << "Masukkan nilai tes: ";
    cin >> nilaiTes;
    cout << "Masukkan nilai UTS: ";
    cin >> nilaiUTS;
    cout << "Masukkan nilai UAS: ";
    cin >> nilaiUAS;
    cout << "Masukkan nilai tugas: ";
    cin >> nilaiTugas;
    float nilaiAkhir = hitungNilaiAkhir(nilaiTes, nilaiUTS, nilaiUAS, nilaiTugas);
    string nilaiIndeks = konversiNilaiIndeks(nilaiAkhir);
    cout << "Nilai akhir: " << nilaiAkhir << endl;
    cout << "Nilai indeks: " << nilaiIndeks << endl;
    return 0;
}