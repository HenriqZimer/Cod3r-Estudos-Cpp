#include <iostream>
#include <locale.h>
using namespace std;

int main() {
  setlocale(LC_ALL, "portuguese");
  string names[5];
  names[0] = "henrique";
  names[1] = "karin";
  names[2] = "jair";
  names[3] = "helena";
  names[4] = "keko";

  cout << names[0] << endl;
  cout << names[1] << endl;
  cout << names[2] << endl;
  cout << names[3] << endl;
  cout << names[4] << endl;

  return 0;
}