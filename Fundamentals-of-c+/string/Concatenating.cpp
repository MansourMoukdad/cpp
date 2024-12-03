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

    cout << fname << lname << "\n";
    // cout << strcat(fname, lname) << "\n";

    string firstname = "Mansour ";
    string lastname = "Almoukdad";
    cout << firstname + lastname << "\n";
    cout << firstname.append(lastname) << "\n";

    return 0;
}