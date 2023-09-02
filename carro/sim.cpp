
#include <iostream>
#include "carros.h"

using namespace std;

int main()
{
    Carro monza;
    monza.ano = 1999;
    monza.nome = "Monza";
    monza.marca = "Chevrolet";
    monza.preco = 10246;

    int tamanho = 0;
    cout << "Quantos carros deseja cadastrar? " << endl;
    cin >> tamanho;
    Carro* vetorCarros = new Carro[tamanho];

    cadastrarCarros(vetorCarros, tamanho);

    cout << "----------------------------------" << endl;

    imprimirCarros(vetorCarros, tamanho);

    cout << "----------------------------------" << endl;

    int ano = 0;
    cout << "Deseja procurar carros de qual ano? " << endl;
    cin >> ano;
    contarAno(vetorCarros, tamanho, ano);

    cout << "----------------------------------" << endl;
    string nome = " ";
    cout << "Qual é o nome do carro que deseja atualizar o preço? " << endl;
    cin >> nome;
    float preco = 0;
    cout << "Qual é o novo preço? " << endl;
    cin >> preco;

    atualizarPreco(vetorCarros, tamanho, nome, preco);

    cout << "----------------------------------" << endl;

    float precoInicial = 0;
    float preco_final = 0;
    cout << "Qual é o preço inicial dos carros que deseja procurar? " << endl;
    cin >> precoInicial;
    cout << "Qual é o preço final dos carros que deseja procurar? " << endl;
    cin >> preco_final;

    listarFaixa(vetorCarros, tamanho, precoInicial, preco_final);

    cout << "----------------------------------" << endl;

    string marca = "";
    cout << "Qual é o marca de carro que deseja procurar? " << endl;
    cin >> marca;

    listarMarca(vetorCarros, tamanho, marca);
}





