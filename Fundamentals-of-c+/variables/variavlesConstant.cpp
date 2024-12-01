/*
  Constant Variable
  - Read Only Value
  - Can't Declare Without Value
*/

#include <iostream>
using namespace std;
#define DAYS 9; // Declare const, it's advanced and has some issue 

int main()
{
    const int day = 9;
    // int salary = 15000;
    const int num = 100;
    // num = 200; // error: can not change const
    cout << num;
    // const x; // error: Should assign a value
    cout << "\n" 
         << DAYS;
    return 0;
}