#include <iostream>
#include <locale.h>
using namespace std;

void inputNumeros(int& num1, int& num2) {
  cout << "Vamos calcular" << endl;
  cout << "Insira o Primeiro numero que deseja calcular: ";
  cin >> num1;
  cout << "Insira o Segundo numero que deseja calcular: ";
  cin >> num2;
}

int qualMetodo() {
  int metodo;
  cout << "Qual metodo deseja calcular? 1-Somar 2-Subtrair 3-Multiplicar 4-Dividir 5-Resto da Divisão: ";
  cin >> metodo;
  cout << endl;
  return metodo;
}

int calculadora(int num1, int num2, int metodo) {
  int resultado;

  if (metodo == 1) {
    resultado = num1 + num2;
  }
  else if (metodo == 2) {
    resultado = num1 - num2;
  }
  else if (metodo == 3) {
    resultado = num1 * num2;
  }
  else if (metodo == 4) {
    resultado = num1 / num2;
  }
  else if (metodo == 5) {
    resultado = num1 % num2;
  }
  else {
    cout << "Método inválido." << endl;
  }
  return resultado;
}

int main() {
  setlocale(LC_ALL, "portuguese");
  int num1, num2, metodo, resultado;

  inputNumeros(num1, num2);

  metodo = qualMetodo();

  resultado = calculadora(num1, num2, metodo);

  cout << "O resultado da sua conta é:" << resultado << endl;

  return 0;
}