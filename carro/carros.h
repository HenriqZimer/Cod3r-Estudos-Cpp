#ifndef CARROS_H
#define CARROS_H

#include <string>    

using namespace std;

struct Carro {
	int ano;
	string nome;
	string marca;
	float preco;
};

void cadastrarCarros(Carro* carros, int tamanho);
void imprimirCarros(Carro* carros, int tamanho);
void contarAno(Carro* carros, int tamanho, int ano);
void atualizarPreco(Carro* carros, int tamanho, string nome_carro, float novo_preco);
void listarFaixa(Carro* carros, int tamanho, float precoInicial, float preco_final);
void listarMarca(Carro* carros, int tamanho, string marca);

#endif
