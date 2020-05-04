// http://www.cplusplus.com/doc/tutorial/operators/
#include <iostream>
using namespace std;

#define NEWLINE '\n'

int main ()
{
  int a,b;
  a = 100;
  b = 30;
  a = b;
  b = 7;
  
  cout << "a: ";
  cout << a;
  cout << NEWLINE;
  cout << "b: ";
  cout << b;

  int x,y,z;
  x = y = z = 50;
  cout << NEWLINE;
  cout << x << endl;
  cout << y << endl;
  cout << z << endl;
}