/*
  Control Flow
  - Ternary Operator

  Syntax
  (Condition is Ture) ? True : False;
*/

#include <iostream>
using namespace std;

int main()
{
  int age = 15;
  if(age >= 18)
  {
    cout << "Your Age is OK \n";
  } else 
  {
    cout << "Your Age is Not OK \n";
  }

  cout << (age >= 18 ? "Your Age is OK \n" : "Your Age is Not OK \n");

  string msg = age >= 18 ? "Your Age is OK \n" : "Your Age is Not OK \n";
  cout << msg;

  return 0;
}