#include <iostream>
using namespace std;

int main ()
{
  string str;
  cout << "MySQL (mock)\n";
  do {
    cout << "mysql> ";
    getline (cin,str);
    if (str == "show databases;")
      cout << "+--------------------+\n| Database           |\n+--------------------+\n| information_schema |\n| progate            |\n+--------------------+\n2 rows in set (0.00 sec)\n\n";
    else if (str == "exit")
      cout << "Bye";
    else
      cout << "ERROR: unsupported commands\n"; 
  }while (str != "exit");
}