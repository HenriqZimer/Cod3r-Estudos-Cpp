// #include <iostream>
// #include <locale.h>
// using namespace std;

// int envioNormal(float peso) {
//   float custoBase, custoAdicional, valorFinal;

//   custoBase = peso * 10;
//   if (peso > 100) {
//     custoAdicional = (peso - 100) * 20;
//   }
//   return custoBase + custoAdicional;
// }
// int envioExpresso(float peso) {
//   float custoBase, custoAdicional, valorFinal;

//   custoBase = peso * 20;
//   if (peso > 100) {
//     custoAdicional = (peso - 100) * 40;
//   }
//   return custoBase + custoAdicional;
// }

// int main() {
//   setlocale(LC_ALL, "portuguese");
//   float peso;

//   cout << "Qual o peso da sua encomenda?: ";
//   cin >> peso;

//   cout <<
//     return 0;
// }


// #include <iostream>
// #include <locale.h>
// using namespace std;

// enum TipoEnvio {
//   NORMAL,
//   EXPRESSO
// };

// float calcularCusto(float peso, TipoEnvio tipo) {
//   float custoBase, custoAdicional = 0;

//   if (tipo == NORMAL) {
//     custoBase = peso * 10;
//     if (peso > 100) {
//       custoAdicional = (peso - 100) * 20;
//     }
//   }
//   else if (tipo == EXPRESSO) {
//     custoBase = peso * 20; // Ajustei o custo base do expresso para diferenciar do normal
//     if (peso > 100) {
//       custoAdicional = (peso - 100) * 40;
//     }
//   }

//   return custoBase + custoAdicional;
// }

// int main() {
//   setlocale(LC_ALL, "portuguese");
//   float peso;

//   cout << "Qual o peso da sua encomenda?: ";
//   cin >> peso;

//   cout << "Custo de envio normal: " << calcularCusto(peso, NORMAL) << endl;
//   cout << "Custo de envio expresso: " << calcularCusto(peso, EXPRESSO) << endl;

//   return 0;
// }
