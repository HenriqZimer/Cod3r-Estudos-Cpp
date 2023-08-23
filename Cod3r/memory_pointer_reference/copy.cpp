#include <iostream>
#include <locale.h>
using namespace std;

int main() {
  setlocale(LC_ALL, "portuguese");
  int a = 2;
  int b = a;

  a++;
  b--;

  cout << a << " " << b << endl;
  return 0;
}