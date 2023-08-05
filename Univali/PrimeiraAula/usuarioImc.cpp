#include <iostream>
using namespace std;

int main(){

  double peso, altura, resultado;

  cout << "Vamos calcular seu IMC..." << endl;
  cout << "Informe seu peso: ";
  cin >> peso;
  cout << "Informe sua altura: ";
  cin >> altura;

  resultado = peso / (altura * altura);

  cout << "Seu IMC eh: " << resultado << endl;
  
  return 0;
}
