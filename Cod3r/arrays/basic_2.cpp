#include <iostream>
#include <locale.h>
using namespace std;

int main() {
  setlocale(LC_ALL, "portuguese");
  string names[] = { "Hannah","Peter", "Mary", "Mike", "James", "John" };
  names[0] = "henrique";

  int size = sizeof names / sizeof names[0];
  for (int i = 0; i < size; i++) {
    cout << names[i] << endl;
  }

  return 0;
}