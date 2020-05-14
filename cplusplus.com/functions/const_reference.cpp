#include <iostream>
using namespace std;

string concatenate (const string& a, const string& b)
{
  // cannot override a
  // e.g. a += " "
  return a + " " + b + "!";
}

int main()
{
  string a="Hello", b="World", x;
  x = concatenate(a, b);
  cout << "a: " << a << ", b: " << b << ", x: " << x;
}
