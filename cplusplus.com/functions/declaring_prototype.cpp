#include <iostream>
using namespace std;

/*
  the return type and the type and number of its arguments is must be same
  WOULD NOT BE COMPILED: void concatenate (int);

  The parameter list does not need to include the parameter names, but only their types.
  WOULD BE COMPILED: void concatenate (int, int) 

  Do not need to necessarily match those in the function definition
  WOULD BE COMPILED: void concatenate (int first, int second)
*/

int concatenate (int x, int y);

int main()
{
  int x=1, y=2, z;
  z = concatenate(x, y);
  cout << z;
}

int concatenate (int x, int y)
{
  return x + y;
}