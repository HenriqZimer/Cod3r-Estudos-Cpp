#include <iostream>
#include <locale.h>
using namespace std;

int main() {
  setlocale(LC_ALL, "portuguese");
  int a = 10;
  string name = "henrique";

  cout << a << "\t" << &a << endl;
  cout << name << "\t" << &name << endl;
  return 0;
}