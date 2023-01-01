#include <iostream>
using namespace std;

void calculateBill(string day, float amount);

main ()
{ 
  string day;
  cin >> day;
  float amount;
  cin >> amount;
  calculateBill(day , amount);
}

void calculateBill(string day, float amount)
{
  float discount;
  if (day == "Sunday")
   {
     discount= 0.9 * amount;
     cout << " Your discounted price: " << discount;
   }
  if (day != "Sunday")
   { 
    discount= 0.95 * amount;
    cout << " Your amount is: " << discount ;
   }

}
