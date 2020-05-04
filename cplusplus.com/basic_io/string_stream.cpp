// third http://www.cplusplus.com/doc/tutorial/basic_io/
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main ()
{
  string mystr;
  float price=0;
  int quantity=0;

  cout << "Enter price: ";
  getline (cin,mystr);
  stringstream(mystr) >> price;
  cout << "Enter quantity: ";
  getline (cin,mystr);
  stringstream(mystr) >> quantity;
  cout << "Total price: " << price*quantity << endl;

  /*
  With this approach of getting entire lines and extracting their contents, 
  we separate the process of getting user input from its interpretation as data, 
  allowing the input process to be what the user expects, 
  and at the same time gaining more control over the transformation of its content into useful data by the program.
  */

}