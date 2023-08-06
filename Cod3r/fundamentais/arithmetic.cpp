#include <iostream>
using namespace std;

int main()
  {
  int x;
  int y;
  cout << "Vou precisar de dois numeros para fazer calculos ..." << endl;

  cout << "Insira o primeiro numero que voce deseja calcular: " << endl;
  cin >> x;

  cout << "Insira o segundo numero que voce deseja calcular: " << endl;
  cin >> y;

  cout << "O resultado da soma dos numeros eh: " << x + y << endl;
  cout << "O resultado da subtracao dos numeros eh: " << x - y << endl;
  cout << "O resultado da multiplicacao dos numeros eh: " << x * y << endl;
  cout << "O resultado da divisao dos numeros eh: " << x / y << endl;
  cout << "O resultado da resto da divisao dos numeros eh: " << x % y << endl;

  return 0;
  }