#include <iostream>
using namespace std;

int main ()
{
  string str;
  cout << "Please Enter a word: ";
  cin >> str;

  for(char c : str)
  {
    cout << c << " ";
  }
}