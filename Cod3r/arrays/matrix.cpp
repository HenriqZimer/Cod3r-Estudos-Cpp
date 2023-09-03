#include <iostream>
using namespace std;

int main() {

  int matrix[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };

  cout << matrix[1][2] << endl;
  matrix[1][2] = 16;
  cout << matrix[1][2] << endl;
  return 0;
}