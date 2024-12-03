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

    string firstname = "Mansour ";
    string lastname = "Almoukdad";
    cout << firstname + lastname << endl;
    cout << firstname.append(lastname) << endl;

    return 0;
}