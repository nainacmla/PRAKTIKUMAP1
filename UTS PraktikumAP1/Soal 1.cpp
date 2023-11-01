#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string password;
    cout << "Masukkan password: ";
    cin >> password;

    // Cek apakah password valid
    bool valid = true;
    if (password.length() > 8) {
        valid = false;
    } else {
        for (int i = 0; i < password.length(); i++) {
            if (!isalnum(password[i])) {
                valid = false;
                break;
            }
            if (i > 0 && password[i] == password[i-1]) {
                valid = false;
                break;
            }
        }
    }

    // Konversi password
    if (valid) {
        string converted_password = "";
        for (int i = 0; i < password.length(); i++) {
            if (isdigit(password[i])) {
                int digit = password[i] - '0';
                digit *= 2;
                converted_password += to_string(digit);
            } else {
                char c = password[i];
                if (islower(c)) {
                    c = (c - 'a' + 2) % 26 + 'a';
                } else {
                    c = (c - 'A' + 2) % 26 + 'A';
                }
                converted_password += c;
            }
        }
        cout << "Password yang dimasukkan: " << password << endl;
        cout << "Password yang tersimpan: " << converted_password << endl;
    } else {
        cout << "Password tidak valid" << endl;
    }

    return 0;
}