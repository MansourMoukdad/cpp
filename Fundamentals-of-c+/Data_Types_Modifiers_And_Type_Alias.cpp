/*
  Primitive Data Types
  - Modifiers
  --- Modify The Length Of Data => See Limits

  ----- ٍSigned [int, char]
  -------- Store Positive, Negative Integers And 0
  -------- int Is Signed By Default

  ----- Unsigned [int, char]
  -------- Store Positive Only

  ----- Short [int]
  -------- Can Be short Instead of short int

  ----- Long [int, double]
  -------- Store Maximum Value
  -------- Can Be long Instead of long int

  - Type Alias
  --- using identifier = type;
  --- typedef unsigned long UL;

*/


#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
  int age = 300;
  cout << sizeof(age) << "\n"; // 4 Bytes

  short int new_age = 300;
  cout << sizeof(new_age) << "\n"; // 2 Bytes
  
  short last_age = 300;
  cout << sizeof(last_age) << "\n"; // 2 Bytes

  cout << sizeof(short int) << "\n";
  cout << sizeof(short) << "\n";
  cout << sizeof(long int) << "\n";
  cout << sizeof(long) << "\n";
  cout << sizeof(long long int) << "\n";
  cout << sizeof(long long) << "\n";


  return 0;
}