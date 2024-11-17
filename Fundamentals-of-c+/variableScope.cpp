/*
  Variables Scope
  - Global Variable
  - Local Variable
*/

#include <iostream>
using namespace std;


int a = 100;  // Global scope

int second()
{
    int b = 200;  // Global scope
    cout << a << " Comming from second function \n";
    cout << b << " Comming from second function \n";
    return 0;
}
int main()
{
    int a = 100;
    cout << a << " Comming from main function \n";
    // cout << b << " Comming from main function \n"; // Undefiend
    second();
    return 0;
}

