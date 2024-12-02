/*
  Arrays
  - What Is Array ?
  --- Collection Of Elements Of The Same Type
  --- Placed in Contiguous Memory Locations
  --- Referenced By Index Started From 0
  - Why We Need Array ?
  - Creating Array Syntax
  - Check Array Size
  - Create Array Without Size
*/

#include <iostream>
using namespace std;

int main() 
{ 
    int nums[4] = {100, 200, 300, 400};
    cout << sizeof(int) << endl; // 4 Bytes
    cout << sizeof(nums) << endl; // 16 Bytes

    double dos[4] = {100, 200, 300, 400};
    cout << sizeof(double) << endl; // 4 Bytes
    cout << sizeof(dos) << endl; // 16 Bytes

    int rands[]{100, 1000, 950};
     
    return 0;
}