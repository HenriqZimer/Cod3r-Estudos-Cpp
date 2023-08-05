#include <iostream>
using namespace std;

int main()
{
  // for (int i = 0; i < 10; i++)
  // {
  //   if (i % 2 == 1)
  //   {
  //     continue;
  //   }
  //   cout << i << endl;
  // }

  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      if (j == 2)
      {
        break;
      }
      cout << i << " " << endl;
    }
  }

  cout << "end" << endl;

  return 0;
}
