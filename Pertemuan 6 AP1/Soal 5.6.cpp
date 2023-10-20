#include <iostream>
using namespace std;

int main() {
    for (char c = 'A'; c <= 'Z'; c++) {
        for (char d = c; d <= 'Z'; d++) {
            cout << d;
        }
        cout << " ";
    }
    cout << endl;

return 0;
}