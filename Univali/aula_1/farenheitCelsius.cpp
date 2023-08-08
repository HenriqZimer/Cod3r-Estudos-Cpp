#include <iostream>
using namespace std;

int main() {

  double fahrenheit, resultado;

  cout << "Vamos calcular a conversao de fahrenheit para celcius..." << endl;
  cout << "Vamos precisar de algumas informacoes para o calculo..." << endl;

  cout << "\nQual a temperatura em fahrenheit deseja converter?: ";
  cin >> fahrenheit;

  resultado = (fahrenheit - 32) / 1.8000;

  cout << "O valor de fahrenheit para celcius eh: " << resultado << endl;

  return 0;
}
