/*
  Control Flow
  - If Condition Introduction

  Syntax
  if (Condition Is True)
  {
    // Do Something
  }
*/

#include <iostream>
using namespace std;

int main()
{
  int age = 20;

  cout << "Welcome \n";
  if(age < 18)
  {
    cout << "Beware \n";
  }
  cout << "See You \n";

  return 0;
}