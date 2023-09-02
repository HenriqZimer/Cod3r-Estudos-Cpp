#include <iostream>
#include <locale.h>
using namespace std;

int main() {
  setlocale(LC_ALL, "portuguese");

  int values[] = { 0,1,2,3,4,5 };
  cout << values[0] << endl;
  cout << values[4] << endl;
  cout << sizeof values[0] << endl;
  cout << sizeof values << endl;
  cout << sizeof values / sizeof values[4] << endl;
  return 0;
}