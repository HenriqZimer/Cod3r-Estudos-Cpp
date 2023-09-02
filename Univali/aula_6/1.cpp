#include <iostream>
#include <locale.h>
#include <vector>
using namespace std;

int somarElementos(vector<int> vetor) {
  int soma = 0;                      // Criamos uma vari�vel para guardar a soma

  for (int i = 0; i < vetor.size(); i++) {   // Loop que percorre o vetor
    soma = soma + vetor[i];         // Adicionamos o valor do vetor na posi��o 'i' � soma
  }

  return soma;                        // Retornamos a soma
}

int main() {

  int* vetor;
  cout << "Insira o Tamanho do vetor: ";
  cin >> tamanho;
  vector<int> meuVetor = { 1, 2, 3, 4, 5 }; // Criamos um vetor com alguns n�meros

  int resultado = somarElementos(meuVetor);  // Chamamos a fun��o para somar os elementos

  cout << "A soma �: " << resultado << endl;  // Mostramos o resultado

  return 0;  // Indicamos que o programa terminou com sucesso
}