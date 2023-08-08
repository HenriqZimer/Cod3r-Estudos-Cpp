#include <iostream>
using namespace std;

int main() {

  double pi = 3.14;
  double resultado, raioA, raioB;

  cout << "Vamos calcular a area de um circulo..." << endl;
  cout << "Informe o valor do raio do circulo A: ";
  cin >> raioA;
  cout << "Informe o valor do raio do circulo B: ";
  cin >> raioB;

  resultado = (pi * (raioA * raioA)) + (pi * (raioB * raioB));

  cout << "A area dos dois circulos eh : " << resultado << endl;

  return 0;
}
