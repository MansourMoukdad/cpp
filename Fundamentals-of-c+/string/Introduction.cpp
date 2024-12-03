/*
  String
  - What Is String ?
  - String Types
  --- C Style String Using
  --- String Class Using Standard Library
  - Test Types Size
  - Null Terminated String
  - \0 => Null

  - Remember
  --- String Is Array Of Characters
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World\n";  // 13 => Remember
    cout << "Hello\0 World\n";  // Hello 
    
    cout << "\n";

    char name_a[] = "Mansour";                                        // C-Style
    cout << name_a << "\n"; // Mansour\0
    cout << sizeof(name_a) << "\n"; // 8 each characher = 1 Byte
    cout << name_a[0] << "\n"; // M
    cout << name_a[6] << "\n"; // r

    cout << int(name_a[7]) << "\n"; // \0 = null  => ASCII Value => 0
    cout << int('\b') << "\n"; // \b = 8  => ASCII Value => 8

    char name_b[] = {'M', 'a','n','s', 'o', 'u', 'r', '\0'};
    cout << name_b << "\n"; // Mansour\0
    cout << sizeof(name_b) << "\n"; // 7 each characher = 1 Byte
    cout << name_b[0] << "\n"; // M
    cout << name_b[6] << "\n"; // r

    string name_c = "Mansour";                 // Class Style          
    cout << name_c << "\n"; // Mansour\0
    cout << sizeof(name_c) << "\n"; // 24 will clarifing later
    cout << name_c[0] << "\n"; // M
    cout << name_c[6] << "\n"; // r

    return 0;
}