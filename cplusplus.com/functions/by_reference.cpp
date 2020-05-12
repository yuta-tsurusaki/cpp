#include <iostream>
#include <math.h>
using namespace std;

int powParameters (int a)
{
  a*=a;
  return a;
}
void powArguments (int& a, int& b, int& c)
{
  a*=a;
  b*=b;
  c*=c;
}

int main()
{
  int i, x=2, y=3, z=4;
  i = powParameters(x);
  cout << "i:" << i << " x:" << x << endl;
  powArguments(x, y, z);
  cout << "x:" << x << " y:" << y << " z:" << z;
  return 0;
}