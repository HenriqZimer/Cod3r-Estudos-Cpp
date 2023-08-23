#include <iostream>
#include <locale.h>
using namespace std;

int main() {
  setlocale(LC_ALL, "portuguese");
  int x = 7;
  int& xRef = x;

  cout << x << "\t" << &x << endl;
  cout << xRef << "\t" << &xRef << endl;

  x++;
  cout << xRef;

  xRef--;
  cout << x;
  return 0;
}