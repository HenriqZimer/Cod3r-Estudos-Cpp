// #include <iostream>
// #include <stdio.h>
// #include "vetores.hpp"
// using namespace std;

// int main() {
//   int tamanho = 0;
//   cout << "Digite um tamanho " << endl;
//   cin >> tamanho;
//   int* vetor = new int[tamanho];
//   int elemento;
//   criar(vetor, tamanho);
//   somar(vetor, tamanho);
//   media(vetor, tamanho);
//   existe(vetor, tamanho, elemento);
//   substituir(vetor, tamanho);
//   imprimir(vetor, tamanho);
//   copiar(vetor, tamanho);
//   return 0;
// }

#include <iostream>
#include <stdio.h>
#include "vetores.hpp"
using namespace std;

int main() {
  int tamanho = 0;
  cout << "Digite um tamanho " << endl;
  cin >> tamanho;
  int* vetor = new int[tamanho];
  int elemento = 0; // Inicialize o elemento antes de usar
  criar(vetor, tamanho);
  somar(vetor, tamanho);
  media(vetor, tamanho);
  existe(vetor, tamanho, elemento);
  substituir(vetor, tamanho);
  imprimir(vetor, tamanho);
  copiar(vetor, tamanho);
  delete[] vetor; // Libere a memória alocada
  return 0;
}
