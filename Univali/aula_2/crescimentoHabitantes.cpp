#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
  setlocale(LC_ALL, "portuguese");
  int a = 5000000, b = 7000000, ano;

  while (b > a) {
    a = a + (a * 0.03);
    b = b + (b * 0.02);
    ano++;
  }

  cout << "O tempo necessário para que a população do pais A ultrapasse a população do pais B foi: " << ano << "anos";

  return 0;
}


