/*
  String
  - Concatenating Strings
  --- Normal Way
  --- strcat => Include string.h
  --- With +
  --- append
*/

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char fname[] = "Mansour ";
    char lname[] = "Almoukdad";
    cout << fname << lname << endl;
    cout << strcat(fname, lname) << endl;

    return 0;
}