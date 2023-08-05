#include <iostream>
using namespace std;

int main()
{
  int number1, number2, number3;
  cout << "Enter a number 1: ";
  cin >> number1;
  cout << "Enter a number 2: ";
  cin >> number2;
  cout << "Enter a number 3: ";
  cin >> number3;

  if (number1 > number2 && number1 > number3)
  {
    cout << "O maior numero eh o numero 1" << endl;
  }
  else if (number2 > number1 && number2 > number3)
  {
    cout << "O maior numero eh o numero 2" << endl;
  }
  else
  {
    cout << "O maior numero eh o numero 3" << endl;
  }
  return 0;
}