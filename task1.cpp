#include <iostream>
using namespace std;

void add(int number1 , int number2);
void product(int number1, int number2);
void subtract(int number1, int number2);
void division (int number1, int number2);


main ()
{
  int num1;
  int num2;
  char operation;
  cin >> num1;
  cin >> num2;
  cin >> operation;
    if (operation == '+')
     {
       add(num1 , num2);
     }
    if (operation == '*')
     {
       product(num1, num2);
     }
    if (operation == '-')
     {
       subtract (num1, num2);
     }
    if (operation == '/')
     {
       division (num1, num2);
     }
  
}
void add(int number1 , int number2)
{ 
  int sum;
  sum = number1 + number2;
  cout << "sum: " << sum <<endl;
}


void product(int number1 , int number2)
{ 
  int multiply;
  multiply = number1*number2;
  cout << "product: " << multiply <<endl;
}

void subtract(int number1 , int number2)
{ 
  int minus;
  minus = number1-number2;
  cout << "subtraction: " << minus <<endl;
}
void division(int number1 , int number2)
{ 
  int divide;
  divide = number1/number2;
  cout << "division: " << divide <<endl;
}
