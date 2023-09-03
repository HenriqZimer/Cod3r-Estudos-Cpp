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

  cout << "\nForeach #01 (Copy)...\n" << endl;
  for (string name : names) {
    name.append("!!!!");
    cout << name << endl;
  }

  cout << "\nForeach #02 (Ref)...\n" << endl;
  for (auto& name : names) {
    name.append("!!!!");
    cout << name << endl;
  }

  cout << "\nForeach #03 (Ref CONST)...\n" << endl;
  for (auto const& name : names) {
    // name.append("!!!!");
    cout << name << endl;
  }
  cout << names[0] << endl;


  return 0;
}