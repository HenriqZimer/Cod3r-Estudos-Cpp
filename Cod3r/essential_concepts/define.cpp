#define ZERO 0
#define SQUARE(X) X * X
#include <iostream>
#include <locale.h>
using namespace std;

int main() {
  setlocale(LC_ALL, "portuguese");

  cout << SQUARE(10) << endl;
  // cout << 10 * 10 << endl;
  cout << SQUARE(1 + 2) << endl;
  // cout << 1+2*1+2 << endl;

  return ZERO;
}