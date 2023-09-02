#include <iostream>
#include "carros.h"

void cadastrarCarros(Carro* carros, int tamanho) {
	int ano;
	string nome;
	string marca;
	float preco;
	for (int i = 0; i < tamanho; i++) {

		cout << "digite o nome do carro: ";
		cin >> nome;
		cout << "digite o ano: ";
		cin >> ano;
		cout << "digite a marca: ";
		cin >> marca;
		cout << "digite o preço: ";
		cin >> preco;

		Carro carro;
		carro.ano = ano;
		carro.nome = nome;
		carro.marca = marca;
		carro.preco = preco;

		carros[i] = carro;
	}
}


void imprimirCarros(Carro* carros, int tamanho) {

	for (int i = 0; i < tamanho; i++) {
		Carro carro = carros[i];
		cout << carro.ano << ", " << carro.nome << ", " << carro.marca << "," << carro.preco << endl;
	}

}

void contarAno(Carro* carros, int tamanho, int ano) {

	int contador = 0;
	for (int i = 0; i < tamanho; i++) {
		Carro carro = carros[i];
		if (carro.ano == ano) {
			contador++;
		}
	}
	cout << "temos " << contador << " carros com o ano de " << ano << endl;
}

void atualizarPreco(Carro* carros, int tamanho, string nomeCarro, float novoPreco) {

	int precoAntigo = 0;
	for (int i = 0; i < tamanho; i++) {
		Carro carro = carros[i];
		if (carro.nome == nomeCarro) {
			precoAntigo = carro.preco;
			carro.preco = novoPreco;
		}
	}
	cout << "atualizamos o preco do " << nomeCarro << " de " << precoAntigo << " para " << novoPreco << endl;
}


void listarFaixa(Carro* carros, int tamanho, float precoInicial, float preco_final) {

	for (int i = 0; i < tamanho; i++) {
		Carro carro = carros[i];
		if (carro.preco >= precoInicial && carro.preco <= preco_final) {
			cout << carro.ano << ", " << carro.nome << ", " << carro.marca << "," << carro.preco << endl;
		}
	}

}

void listarMarca(Carro* carros, int tamanho, string marca) {

	for (int i = 0; i < tamanho; i++) {
		Carro carro = carros[i];
		if (carro.marca == marca) {
			cout << carro.ano << ", " << carro.nome << ", " << carro.marca << "," << carro.preco << endl;
		}
	}
}

