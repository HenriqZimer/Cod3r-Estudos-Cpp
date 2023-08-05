#include <iostream>
using namespace std;

int main(){

  int resultado, nota1, nota2, nota3, nota4;

  cout << "Vamos calcular a media das suas notas do bimestre..." << endl;
  cout << "Vamos precisar de algumas informacoes para o calculo..." << endl;

  cout << "Informe o valor da primeira NOTA: ";
  cin >> nota1;
  cout << "Informe o valor da segunda NOTA: ";
  cin >> nota2;
  cout << "Informe o valor da terceira NOTA: ";
  cin >> nota3;
  cout << "Informe o valor da quarta NOTA: ";
  cin >> nota4;

  resultado = (nota1 + nota2 + nota3 + nota4) / 4;

  cout << "Sua media do bimestre eh : " << resultado << endl;

  return 0;
}