#include <iostream>
#include <locale.h>
using namespace std;

int main() {
  setlocale(LC_ALL, "portuguese");

  cout << "#include" << endl;
  return 0;
#include "include.h"