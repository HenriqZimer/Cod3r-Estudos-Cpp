#include <iostream>
using namespace std;

int main()
{
  int nota, media;
  int i = 0, soma = 0;
  cout << "Vamos calcular a media de notas que voce fornecer..." << endl;
  cout << "Para cancelar o envio de notas digite ' -1 '..." << endl;

  while (true) {
    cout << "Qual a sua nota? :";
    cin >> nota;

    if (nota == -1) {
      break;
    }
    soma += nota;
    i++;
  }
  media = soma / i;
  cout << "Sua media eh: " << media << endl;

  return 0;
}