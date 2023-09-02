#include <iostream>
#include <locale.h>
using namespace std;

int main() {
  setlocale(LC_ALL, "portuguese");

  double pi = 3.14;
  double& piRef = pi;

  cout << piRef << endl;
  cout << &pi << endl;

  return 0;
}