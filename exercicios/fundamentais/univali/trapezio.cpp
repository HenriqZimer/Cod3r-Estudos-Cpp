#include <iostream>
using namespace std;

int main(){

  int resultado, altura, baseMaior, baseMenor;

  cout << "Vamos calcular a area de um trapezio..." << endl;
  cout << "Vamos precisar de algumas informacoes para o calculo..." << endl;
  cout << "Vamos precisar de que os tamanhos sejam da mesma unidade de medida\n" << endl;

  cout << "Informe o valor da base maior do trapezio: ";
  cin >> baseMaior;
  cout << "Informe o valor da base menor do trapezio: ";
  cin >> baseMenor;
  cout << "Informe o valor da altura do trapezio: ";
  cin >> altura;

  resultado = ((baseMaior + baseMenor) * altura) / 2;

  cout << "A area do seu trapezio eh : " << resultado << endl;

  return 0;
}