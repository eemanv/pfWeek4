#include <iostream>
using namespace std;

void is_eligible(int age);

main ()
{
  int age;
  cin >> age;
  is_eligible(age);
}
void is_eligible(int age)
{
 if ( age== 18)
  {
   cout << "Eligible";
  }
 if ( age > 18)
  {
   cout << "Eligible";
  }
 if (age < 18)
  { 
   cout << "Not Eligible";
  }
}
