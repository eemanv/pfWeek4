#include <iostream>
using namespace std;

void isEven(int number);

main ()
{
  int number;
  cin >> number;
  while (true)
{
  isEven(number);
}
}

void isEven(int number)
{
if (number %2==0)
   {
    cout <<" Even Number";
   }
if (number %2!=0)
   {
    cout <<" Odd Number";
   }
}