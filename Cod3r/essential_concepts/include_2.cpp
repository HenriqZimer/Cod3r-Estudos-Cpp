#include <iostream>
#include <locale.h>
#include "includes/include_2.h"
using namespace std;

int main() {
  setlocale(LC_ALL, "portuguese");

  cout << add(7, 8) << endl;
  return 0;
}

int add(int x, int y) {
  return x + y;
}