#include <iostream>
using namespace std;
void  tukar(int &a, int&b) {

  a = 98;
  b = 67;
}
int main () {
   int a, b;
  a = 67;
  b = 98;
  
  cout << "nilai sebelum di tukar" << a << b << endl;
  tukar (a,b) ;
  cout << "nilai setelah di tukar" << a << b << endl;
}