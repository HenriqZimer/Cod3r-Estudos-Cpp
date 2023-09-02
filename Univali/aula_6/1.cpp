#include <iostream>
#include <locale.h>
#include <vector>
using namespace std;

int somarElementos(vector<int> vetor) {
  int soma = 0;                      // Criamos uma variável para guardar a soma

  for (int i = 0; i < vetor.size(); i++) {   // Loop que percorre o vetor
    soma = soma + vetor[i];         // Adicionamos o valor do vetor na posição 'i' à soma
  }

  return soma;                        // Retornamos a soma
}

int main() {

  int* vetor;
  cout << "Insira o Tamanho do vetor: ";
  cin >> tamanho;
  vector<int> meuVetor = { 1, 2, 3, 4, 5 }; // Criamos um vetor com alguns números

  int resultado = somarElementos(meuVetor);  // Chamamos a função para somar os elementos

  cout << "A soma é: " << resultado << endl;  // Mostramos o resultado

  return 0;  // Indicamos que o programa terminou com sucesso
}