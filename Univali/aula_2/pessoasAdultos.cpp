#include <iostream>
using namespace std;

int main()
{
  int qtdPessoas;
  cout << "Vamos calcular o numero de pessoas e mostrar a quantidade de adultos..." << endl;
  cout << "Quantas pessoas voce vai fornecer? : " << endl;
  cin >> qtdPessoas;

  while (qtdPessoas <= 0) {
    cout << "henrique" << endl;
    qtdPessoas--;
  }
  return 0;
}