#include <iostream>
using namespace std;

int main(){

  const double PI = 3.1415;
  double radius;

  cout << "Qual o raio que deseja calcular?" << endl;
  cin >> radius;

  double area = PI * radius * radius;

  cout << "A area é" << area << endl;
  
  return 0;
}