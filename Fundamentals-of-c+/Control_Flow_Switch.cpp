/*
  Control Flow
  - Switch
*/

#include <iostream>
using namespace std;

int main()
{
  int day; 
  cout << "Choose A Day from 1 to 25 \n";
  cin >> day;
//   if(day == 1) 
//   {
//   cout << "Open from 8:00 to 14:00 \n";
//   } else if(day == 2) {
//   cout << "Open from 8:00 to 14:00 \n";
//   } else if(day == 3) 
//   {
//   cout << "Open from 8:00 to 16:00 \n";
//   } else 
//   {
//   cout << "Closed \n";
//   }
//   return 0;

  switch (day)
  {
  case 1:
    cout << "Open from 8:00 to 14:00 \n";
    break;
  case 2:
  cout << "Open from 8:00 to 14:00 \n";
  break;
  case 3:
  cout << "Open from 8:00 to 16:00 \n";
  break;
  default:
  cout << "Closed \n";
    break;
  }
}
