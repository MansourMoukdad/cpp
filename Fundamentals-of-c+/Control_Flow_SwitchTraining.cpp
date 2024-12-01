/*
  Control Flow
  - Switch Trainings
  --- Award System Application
  --- Discount Application
  --- Simple Calculator Application
*/

#include <iostream>
using namespace std;

int main()
{
  // APP 1 => --- Award System Application
  // int num;
  //  cout << "Type Your Ticket Number \n";
  //  cin >> num;

  //  switch (num)
  //  {
  //  case 100:
  //  case 110:
  //  case 200:
  //     cout << "Congrats You win an IPHONE\n";
  //   break;
  //  case 400:
  //     cout << "Congrats You win a TV\n";
  //   break;
  //   case 800:
  //     cout << "Congrats You win an CAR\n";
  //  default:
  //     cout << "You Ticket Does Not Have Award\n";
  //   break;
  //  }

  // return 0;

  // APP 2 =>  --- Discount Application

  // int price = 100;
  // int discount = 10;
  // int years;

  // cout << "Type Your Year \n";
  // cin >> years;
  // switch (years)
  // {
  // case 1:
  // discount = 20;
  // break;
  // case 2:
  // discount = 40;
  // break;
  // case 3: 
  // discount = 80;
  // }
  // cout << "The Price is " << price - discount << endl;

  // APP 3 => --- Simple Calculator Application

  int n1, n2, op;
  cout << "Type Number 1 \n";
  cin >> n1;
  cout << "Type Number 2 \n";
  cin >> n2;
  cout << "Choose Opreation Number \n";
  cout << "[1] + \n";
  cout << "[2] - \n";
  cout << "[3] / \n";
  cout << "[4] * \n";
  cin >> op;
  // if(op == 1) 
  // {
  //   cout << n1 + n2 << endl;
  // } else if(op == 2) 
  // {
  //   cout << n1 - n2 << endl;
  // }else if(op == 3) 
  // {
  //   cout << n1 / n2 << endl;
  // }else if (op == 4) 
  // {
  //   cout << n1 * n2 << endl;
  // } else 
  // {
  //   cout << "Invalid Opreation";
  // }
  switch (op)
  {
    case 1:cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
    break;
    case 2:cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
    break;
    case 3:cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;
    break;
    case 4:cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
    break;
    default:
    cout << "Invalid Opreation" << endl;
  }
}