#include <iostream>
#include <locale.h>
using namespace std;

int desconto(float valor = 0, int a = 0) {
  float taxa = 0.05;
  cout << "B" << endl;
  return valor - (valor * taxa);
}
float desconto(float valor = 0, float a = 0.0) {
  float taxa = 0.10;
  cout << "P" << endl;
  return valor - (valor * taxa);
}
bool desconto(float valor = 0, bool a = false) {
  float taxa = 0.15;
  cout << "O" << endl;
  return valor - (valor * taxa);
}

int main() {
  setlocale(LC_ALL, "portuguese");
  float valor, a;

  cout << "Qual o valor gasto?" << endl;
  cin >> valor;

  if (valor < 200) {
    a = 1;
    cout << "B" << endl;
  }
  else if (valor < 300) {
    a = 1.1;
    cout << "P" << endl;
  }
  else {
    a = true;
    cout << "O" << endl;
  }

  cout << "Valor Final com Desconto é: " << desconto(valor, a) << endl;
  return 0;
}