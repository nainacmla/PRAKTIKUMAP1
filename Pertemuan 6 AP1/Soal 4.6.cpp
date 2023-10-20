#include <iostream>
using namespace std;

int main() {
    int n;
    int faktorial = 1;

    cout << "Masukkan bilangan: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        faktorial *= i;
    }

    cout << n << "! = " << faktorial << endl;

return 0;
}