#include <iostream>
#include <locale.h>
using namespace std;

float descontoBronze(float valor = 0) {
  float taxa = 0.05;
  return valor - (valor * taxa);
}
float descontoPrata(float valor = 0) {
  float taxa = 0.10;
  return valor - (valor * taxa);
}
float descontoOuro(float valor = 0) {
  float taxa = 0.15;
  return valor - (valor * taxa);
}

int main() {
  setlocale(LC_ALL, "portuguese");
  float valor;

  cout << "Qual o valor gasto?" << endl;
  cin >> valor;

  if (valor < 200) {
    cout << "Valor Final com Desconto Bronze é: " << descontoBronze(valor) << endl;
  }
  else if (valor < 300) {
    cout << "Valor Final com Desconto Prata é: " << descontoPrata(valor) << endl;
  }
  else {
    cout << "Valor Final com Desconto Ouro é: " << descontoOuro(valor) << endl;
  }
  return 0;
}