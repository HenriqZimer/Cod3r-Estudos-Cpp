// #define SQUARE(X) X * X
#include <iostream>
#include <locale.h>
using namespace std;

int main() {
  setlocale(LC_ALL, "portuguese");

#ifdef SQUARE
  cout << SQUARE(10) << endl;
  cout << SQUARE(1 + 2) << endl;
#else
  cout << "else..." << endl;
  #endif

  #if DEBUG == 0
  cout << "end..." << endl;
  #endif
  return 0;
}