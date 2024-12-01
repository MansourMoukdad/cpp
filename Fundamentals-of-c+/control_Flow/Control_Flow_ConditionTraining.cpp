/*
  Control Flow
  - If Condition Trainings

  4 Training Apps
  - Even / Odd Checker
  - Find Greatest Number
  - User Rank Checker
  - Simple Calculator
*/

#include <iostream>
using namespace std;

int main()
{
  // APP 1 =>   - Even / Odd Checker
  // int num;
  // cin >> num;
  // if(num % 2 == 0)
  //   cout << "The number is " << num << " Even \n";
  // else 
  //   cout << "The number is " << num << " Odd \n";

  // cout << (num % 2 == 0 ?  "The Number Is Even \n" : "The Number Is Odd \n" );

  // APP 2 =>   - Find Greatest Number
  // int a, b, c;
  // cin >> a >> b >> c;
  // if(a > b && a > c)
  // {
  //   cout << a << " Is The Greatest Number\n";
  // } else if (b > a && b > c)
  // {
  //   cout << b << " Is The Greatest Number\n";

  // } else 
  // {
  //   cout << c << " Is The Greatest Number\n";
  // }

  // APP 3 =>   - User Rank Checker
  // int pointes;
  // cin >> pointes;
  // if(pointes > 0 && pointes <= 500)
  // {
  //   cout << "Not Bad\n";
  // } else if(pointes > 500 && pointes <= 1000)
  // {
  //   cout << "Very Good \n";
  // } else if(pointes > 1000) 
  // {
  //   cout << "VIP \n";
  // } else { // For negative inputs
  //   cout << "No Rank \n";
  // }

  // APP 4 =>   - Simple Calculator
  int num_one, num_two, op;

  cout << "Enter Number One \n";
  cin >> num_one;
  cout << "Etner Number Two \n";
  cin >> num_two;
  cout << "Enter Operation Number\n";
  cout << "[1] +\n";
  cout << "[2] -\n";
  cout << "[3] /\n";
  cout << "[4] *\n";
  cin >> op;
  if(op == 1) 
  {
    cout << num_one + num_two;
  } else if(op == 2)
  {
    cout << num_one - num_two;
  } else if(op == 3)
  {
    cout << num_one / num_two;
  } else if(op == 4)
  {
    cout << num_one * num_two;
  } else {
    cout << "Opreation is not valid\n";
  }
  return 0;
}