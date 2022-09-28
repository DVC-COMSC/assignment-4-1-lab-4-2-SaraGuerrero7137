
//?  [Problem Definition]
//*        A software company sells a package that retails for $99. Quantity
// discounts are given
//*        according to the following table.
//*                Quantity                 Discount Percent
//*                10 - 19                        20%
//*                20 - 49                        30%
//*                50 - 99                        40%
//*                100+                            50%
//*- Write a program that asks for the number of units sold and
//*  computes the total cost of the purchase.
//** Input Validation : Input must be a positive integer.
//**    If we have negative input, just quit the program.

//?  [Problem Definition]
//*        A software company sells a package that retails for $99. Quantity
// discounts are given
//*        according to the following table.
//*                Quantity                 Discount Percent
//*                10 - 19                        20%
//*                20 - 49                        30%
//*                50 - 99                        40%
//*                100+                            50%
//*- Write a program that asks for the number of units sold and
//*  computes the total cost of the purchase.
//** Input Validation : Input must be a positive integer.
//**    If we have negative input, just quit the program.

#include <iostream>
using namespace std;
int main() {
  const double RATE2 = 1.10;
  const double RATE6 = 2.20;
  const double RATE10 = 3.70;
  const double RATE20 = 4.80;
  double weight, distance, dRate, price;

  cout << "Enter the package weight and distance\n";
  cin >> weight >> distance;
  //? Input Validation
  if ((weight < 0) && (weight > 20)) {
    cout << "The package weight must be a positive number and less than 20.\n";
    exit(0);
  }

  if (weight < 2)
    dRate = RATE2;
  else if (weight < 6)
    dRate = RATE6;
  else if (weight < 10)
    dRate = RATE10;
  else if (weight <= 20)
    dRate = RATE20;
  else {
    cout << "The weight must be less than 20\n";
    exit(0);
  }

  if (distance < 500)
    price = dRate;
  else
    price = (distance / 500.0) * dRate;
  cout << "The shipping price for package is " << price << endl;
}