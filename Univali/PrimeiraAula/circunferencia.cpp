#include <iostream>
using namespace std;

int main(){

  double pi = 3.14;
  double resultado, raio;

  cout << "Vamos calcular a area de um circulo..." << endl;
  cout << "Informe o valor do raio do circulo: ";
  cin >> raio;

  resultado = pi * (raio * raio);

  cout << "A area do seu circulo eh : " << resultado << endl;

  return 0;
}
