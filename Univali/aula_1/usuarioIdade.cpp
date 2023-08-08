#include <iostream>
using namespace std;

int main() {

  int idade;

  cout << "Vamos Determinar se voce é crianca, adolescente, adulta ou idosa..." << endl;
  cout << "Informe sua idade: ";
  cin >> idade;

  if (idade < 12) {
    cout << "Voce eh uma crianca!" << endl;
  }
  else if (idade < 20) {
    cout << "Voce eh um adolecente!" << endl;
  }
  else if (idade < 50) {
    cout << "Voce eh um adulto!" << endl;
  }
  else {
    cout << "Voce eh um idoso!" << endl;
  }

  return 0;
}
