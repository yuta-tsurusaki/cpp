// http://www.cplusplus.com/doc/tutorial/constants/
#include <iostream>
using namespace std;

const double pi = 3.14159;
const char newline = '\n';

int main ()
{
  double r=5.0;
  double circle= 2 * pi * r;

  cout << circle;
  cout << newline;
}