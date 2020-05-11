#include <iostream>
using namespace std;

int main()
{
  int x = 1;
  switch (x) {
  case 1:
    cout << "x is 1\n";
    // break;
  case 2:
    cout << "x is 2\n";
    break;
  default:
    cout << "value of x unknown";
  }
}