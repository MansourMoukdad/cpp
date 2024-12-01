/*
  Control Flow
  - Nested Ternary Operator
  - Alternate Syntax For If Condition

  Syntax
  (Condition Is True) ? True : False;
*/

#include <iostream>
using namespace std;

int main()
{
  int age = 15;
  int pointes = 400;

  cout << (age >= 18 ?"OK \n" : (pointes >= 500 ? "Ok Pointes \n" : "No Pointes \n"));
  // cout << (pointes >= 500 ? "Ok Pointes \n" : "No Pointes \n");
  if(age >= 18)
    cout << "OK \n";
  else 
    cout << "Not OK \n";
    
  return 0;
}