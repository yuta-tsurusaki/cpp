// second http://www.cplusplus.com/doc/tutorial/basic_io/
#include <iostream>
#include <string>
using namespace std;

int main ()
{
  // getline
  string mystr;
  cout << "What's your name?: ";
  getline(cin,mystr);
  cout << "Hello " << mystr << ".\n";
  cout << "What is your favorite credit card?: ";
  getline (cin, mystr);
  cout << "I like " << mystr << " too!\n";
  
  // experiment: get string with cin
  string bogostr;
  cout << "cin always extract a single word. considers spaces as terminating\n";
  cout << "Please enter more than single word: ";
  cin >> bogostr;
  cout << bogostr;
  return 0;
}