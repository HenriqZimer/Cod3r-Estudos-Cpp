#include <iostream>
using namespace std;

int main()
{
  int qtdNumeros, numero, numeroAntigo;
  cout << "Vamos verificar os numeros e mostrar o menor numero..." << endl;
  cout << "Quantas numeros voce vai fornecer? : ";
  cin >> qtdNumeros;


  cout << "Insira o numero 1: ";
  cin >> numero;
  numeroAntigo = numero;

  for (int i = 2; i <= qtdNumeros; i++) {
    cout << "Insira o numero " << i << ": ";
    cin >> numero;

    if (numero < numeroAntigo) {
      numeroAntigo = numero;
    }
  }
  cout << "Menor numero eh: " << numeroAntigo;

  return 0;
}


