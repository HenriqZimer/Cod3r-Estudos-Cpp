#include <iostream>
#include <locale.h>
using namespace std;

int main() {
  setlocale(LC_ALL, "portuguese");
  string names[] = { "Hannah","Peter", "Mary", "Mike", "James", "John" };

  int size = sizeof names / sizeof names[0];
  for (int i = 0; i < size; i++) {
    cout << names[i] << endl;
  }

  cout << "\nForeach...\n" << endl;

  for (string name : names) {
    cout << name << endl;
  }
  return 0;
}