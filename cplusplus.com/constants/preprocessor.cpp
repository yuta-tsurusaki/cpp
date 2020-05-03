#include <iostream>
using namespace std;

#define PI 3.14159
#define NEWLINE '\n'
#define HOGE "hogehoge" // double quote for several characters

int main ()
{
  double r=5.0;
  double circle;

  circle = 2 * PI * r;
  cout << circle;
  cout << NEWLINE;
  cout << HOGE;
}