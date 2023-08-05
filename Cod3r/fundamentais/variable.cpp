
#include <iostream>
#include <cstdio>

int main()
{

  double price = 99.80;
  double tax = 0.08;

  double finalPrice = price * (1 + tax);

  printf("the final price is %.2f\n", finalPrice);

  return 0;
}