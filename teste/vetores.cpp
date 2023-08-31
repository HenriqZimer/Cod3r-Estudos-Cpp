// #include <iostream>
// #include <stdlib.h>
// #include "vetores.hpp"
// using namespace std;

// void criar(int* vetor, int tamanho) {
//   cout << "criando um vetor: " << endl;
//   for (int i = 0; i < tamanho; i++) {
//     cin >> vetor[i];
//   }
// }

// void imprimir(int* vetor, int tamanho) {
//   cout << "imprimindo um vetor: " << endl;
//   for (int i = 0; i < tamanho; i++) {
//     cout << vetor[i] << " ";
//   }
//   cout << endl;
// }

// void somar(int* vetor, int tamanho) {
//   int soma = 0;
//   for (int i = 0; i < tamanho; i++) {
//     soma += vetor[i];
//   }
//   cout << "soma: " << soma << endl;
// }
// void media(int* vetor, int tamanho) {
//   int soma = 0;
//   for (int i = 0; i < tamanho; i++) {
//     soma += vetor[i];
//   }
//   cout << "media: " << soma / tamanho << endl;
// }
// void existe(int* vetor, int tamanho, int elemento) {
//   for (int i = 0; i < tamanho; i++) {
//     if (vetor[i] == elemento) {
//       cout << "existe" << endl;
//       return;
//     }
//   }
//   cout << "não existe" << endl;
// }

// void substituir(int* vetor, int tamanho) {
//   cout << "substituindo um elemento: " << endl;
//   srand(time(NULL));
//   for (int i = 0; i < tamanho; i++) {
//     if (vetor[i] % 2 != 0) {
//       int par = rand() * 2;
//       vetor[i] = par;
//     }
//   }
// }
// void copiar(int* vetor, int tamanho) {
//   cout << "copiando vetor: " << endl;
//   int* novovetor = new int[tamanho];
//   for (int i = 0; i < tamanho; i++) {
//     novovetor[i] = vetor[i];
//   }
//   imprimir(novovetor, tamanho);

// }

#include <iostream>
#include <stdlib.h>
#include <time.h> // Inclua a biblioteca time.h
#include "vetores.hpp"
using namespace std;

void criar(int* vetor, int tamanho) {
  cout << "criando um vetor: " << endl;
  for (int i = 0; i < tamanho; i++) {
    cin >> vetor[i];
  }
}

// Resto do código permanece o mesmo

void substituir(int* vetor, int tamanho) {
  cout << "substituindo um elemento: " << endl;
  srand(time(NULL));
  for (int i = 0; i < tamanho; i++) {
    if (vetor[i] % 2 != 0) {
      int par = rand() % 2 == 0 ? rand() : rand() + 1; // Corrigir a geração de números pares
      vetor[i] = par;
    }
  }
}

// Resto do código permanece o mesmo

void copiar(int* vetor, int tamanho) {
  cout << "copiando vetor: " << endl;
  int* novovetor = new int[tamanho];
  for (int i = 0; i < tamanho; i++) {
    novovetor[i] = vetor[i];
  }
  imprimir(novovetor, tamanho);
  delete[] novovetor; // Libere a memória alocada
}
