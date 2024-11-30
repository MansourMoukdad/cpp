/*
  Control Flow
  - If ... else if ... else

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
  int age = 25;
  int points = 450;
  int rank = 4;

  if(age >= 18) 
  {
    cout << "Welcome Your Age is OK\n";
  } else if(points > 500) 
  {
    cout << "Welcome Your Points is OK\n";
  } else if(rank > 5) 
  {
    cout << "Welcome Your Rank is OK\n";
  } else 
  {
    cout << " I am Sorry \n";
  }


  return 0;
}