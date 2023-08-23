#include <iostream>
#include <locale.h>
using namespace std;

int main() {
  setlocale(LC_ALL, "portuguese");
  string greeting = "Hi!";
  string& ref = greeting;

  cout << greeting << "\t" << ref << endl;

  string name = "Peter";
  ref = name;

  cout << name << "\t" << greeting << "\t" << ref << endl;
  cout << &name << "\t" << &greeting << "\t" << &ref << endl;

  ref.append("!!!!!");
  cout << greeting;;
  return 0;
}