#include <iostream>
using namespace std;

void checkresult(int marks);

main ()
{ 
  
  int marks;
  cin >> marks;
  while (true)
{
  checkresult(marks);
}
}
   
void checkresult(int marks)
{
  if (marks >50)
   {
    cout << " PASS";
   }
  if (marks <50)
   {
    cout << "FAIL";
   }
  if (marks == 50)
   {
    cout <<" Need To WORK HARD";
   }
}

