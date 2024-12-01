/*
  - Application To Create
  --- Create App Ask You To Type Number Of Kilobytes
  --- Write 3 Lines Contains
  ------ [1] The Number Of Kilobytes That User Input
  ------ [2] The Number Of Bytes
  ------ [3] The Number Of Bits
*/

#include <iostream>
using namespace std;
int main()
{
  cout << "\n---- KiloByteApp ----- \n";
  cout << "\n--------------------- \n";
  
  int num_Of_Kilo;
  cin >> num_Of_Kilo;

  int num_Of_Bytes = num_Of_Kilo * 1024;
  int num_Of_Bites = num_Of_Bytes * 1024;
  
  cout << num_Of_Kilo << " Kilobytes Equal to: \n";
  cout << num_Of_Bytes << " Bytes \n";
  cout << num_Of_Bites << " Bites \n";

  return 0;
}
