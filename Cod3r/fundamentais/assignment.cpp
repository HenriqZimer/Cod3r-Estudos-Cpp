
#include <iostream>
using namespace std;

int main()
{
  int x;

  cout << "Insira o primeiro numero que voce deseja calcular: " << endl;
  cin >> x;

  x += 10;
  cout << x << endl;
  x -= 10;
  cout << x << endl;
  x *= 10;
  cout << x << endl;
  x /= 10;
  cout << x << endl;
  x %= 10;
  cout << x << endl;

  return 0;
}