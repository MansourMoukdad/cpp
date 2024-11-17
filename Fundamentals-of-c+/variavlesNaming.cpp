/*
  Variables Naming Rules & Best Practices

  - Naming Rules
  --- Must Be Unique
  --- Case Sensitive
  --- Cannot Start With Numbers
  --- Nums Or Letters Or Underscore
  --- No White Space Or Special Characters
  --- Reserved Keywords "Class, Public"

  - Best Practices
  --- Related Names
  --- Writing Style
*/
#include <iostream>
using namespace std;

int main()
{
    int price = 100;
    price = 200;
    int Price = 300;
    cout << price;
    cout << "\n=========\n";
    int num111 = 10;
    cout << num111;
    cout << "\n=========\n";
    int _num_ber_ = 100;
    cout << _num_ber_;
    cout << "\n=========\n";
    int publicName = 1000;
    cout << publicName;

}