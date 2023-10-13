#include <iostream>

// Untuk menentukan apakah suatu tahun adalah tahun kabisat
bool isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true;
    } else {
        return false;
    }
}

// Fungsi untuk menentukan jumlah hari dalam bulan tertentu
int daysInMonth(int year, int month) {
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (isLeapYear(year) && month == 2) {
        return 29; // Februari pada tahun kabisat
    } else {
        return days[month - 1];
    }
}

// Fungsi untuk menghitung next day
void getNextDay(int &year, int &month, int &day, int numDays) {
    for (int i = 0; i < numDays; i++) {
        day++;
        if (day > daysInMonth(year, month)) {
            day = 1;
            month++;
            if (month > 12) {
                month = 1;
                year++;
            }
        }
    }
}

int main() {
    int year, month, day, numDays;

    std::cout << "Masukkan tahun (contoh: 2023): ";
    std::cin >> year;
    std::cout << "Masukkan bulan (1-12): ";
    std::cin >> month;
    std::cout << "Masukkan hari (1-31): ";
    std::cin >> day;
    std::cout << "Masukkan jumlah hari yang akan ditambahkan: ";
    std::cin >> numDays;

    getNextDay(year, month, day, numDays);

    std::cout << "Tanggal setelah " << numDays << " hari adalah: " << year << "-" << month << "-" << day << std::endl;

    return 0;
}