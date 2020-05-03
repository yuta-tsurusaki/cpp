// second 
#include <iostream>
using namespace std;

int main ()
{
  int a = 5;
  int b(3);
  int c{2};
  int result; // initial value undetermined

  a = a + b;
  result = a - c;
  cout << result;

  return 0;
}