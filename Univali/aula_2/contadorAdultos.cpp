#include <iostream>
using namespace std;

int main()
{
  int qtdPessoas, idade, i = 0;
  cout << "Vamos calcular o numero de pessoas e mostrar a quantidade de adultos..." << endl;
  cout << "Quantas pessoas voce vai fornecer? : ";
  cin >> qtdPessoas;

  while (qtdPessoas > 0)
  {
    cout << "Qual a sua idade? : ";
    cin >> idade;

    if (idade > 20 && idade < 50) {
      i++;
    }
    qtdPessoas--;
  }
  cout << "O numero de adultos do grupo eh: " << i << endl;

  return 0;
}