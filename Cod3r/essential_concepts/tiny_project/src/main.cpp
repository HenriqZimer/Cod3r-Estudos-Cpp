#include <iostream>
#include <locale.h>
#include "functions/calc.h"
using namespace std;
using namespace calc;

int main() {
  setlocale(LC_ALL, "portuguese");

  cout << add(100, 200) << endl;
  cout << subtract(100, 200) << endl;
  cout << "Hello, World!" << endl;
  return 0;
}