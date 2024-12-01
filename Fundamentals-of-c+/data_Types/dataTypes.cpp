/*
  Data Types
  - What Is Data ?
  - Data Examples In Real Life
  --- Integer => 5000, 10, -100
  --- String => "CODINGO", "Mansour Almoukdad", "100A"
  --- Boolean => true, false
  --- Float => 18.5, 1900.50
  --- Array => ["Osama", "Ahmed", "Sayed", "Mahmoud"]
  - Why We Choose Data ?
  --- Size
  --- Operation

  What Is Operand ?
  - The Part Of an Instruction Representing The Data Manipulated by The Operator
*/
#include <iostream>
using namespace std;

int main()
{
  int num = 10;
  string name = "Mansour Almoukdad";
  bool status = true;

  int num_One = 100;
  int num_Two = 20;

  cout << sizeof(num) << "\n";
  cout << sizeof(name) << "\n";
  cout << sizeof(status) << "\n";

  cout << num_One / num_Two; // 100 /20 = 5
  // cout << num_One / name; // Error
  }