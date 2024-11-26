/*
  Primitive Data Types
  - int => Integer
  --- Test Numbers
  --- Test Floating Point vs Int
  --- Store From -2147483648 To 2147483647
  --- INT_MIN and INT_MAX Constants
  --- Check Limits Header File limits.h
  --- Test Size Of Data Types Without Variables & Use End Line

  - = Assignment Operator
*/

#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
int num_One = 100;
int num_Two = -500;
int num_Three = 0;
int num_Four = true;
// int num_Five = "Mansour"; // Problem
cout << num_One << endl;
cout << num_Two << endl;
cout << num_Three << endl;
cout << num_Four << endl;

cout << INT_MIN << endl;
cout << INT_MAX << endl;

cout << sizeof(int) << endl;
cout << sizeof(char) << endl;
cout << sizeof(float) << endl;
cout << sizeof(double) << endl;
cout << sizeof(bool) << endl;

int last_num = 10.5;
cout << last_num << endl;
  return 0;
}