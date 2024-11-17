// Your First C++ Program
/*
  Variables Basic Knowledge
  - Data Container With Unique Name "Identifier"
  - Declare With Value + Change Later

  Syntax
  - [Data_Type] [Variable_Name] = [Value]
*/

#include <iostream>
    using namespace std;
int main() {
    int price = 200;
    cout << "Price is " << price;
    cout << "\nPrice is after adding 15 is " << price + 15;
    cout << "\nPrice is after adding 50 is " << price + 50;
    price = 150;
    cout << "\nThe new Price is " << price;

    return 100;
}