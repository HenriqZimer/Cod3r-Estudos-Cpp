#include <iostream>
using namespace std;

int main()
{
  bool sunny = false;
  string result = sunny ? ":)" : ":(";
  cout << result << endl;

  double balance = 1234.56;
  double value;
  cout << "Enter the value: " << endl;
  cin >> value;

  char creditOrDebt;
  cout << "Credit (c)/Debt (d): ";
  cin >> creditOrDebt;

  cout << "Balance [before]: " << balance << endl;

  balance += creditOrDebt == 'c' ? value : -value;

  cout << "Balance [after]: " << balance << endl;
  return 0;
}