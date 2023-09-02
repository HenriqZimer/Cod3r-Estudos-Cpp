#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");

    cout << "Hello, World!" << endl;
    return 0;
}