#include <iostream>
using namespace std;
int main()
{
 int num1,num2,i,gcd=0;
 cout << "Enter number 1 : ";
 cin >> num1;
 cout << "Enter number 2 : ";
 cin >> num2;
 for (i=1;i<=num2;i++)
 {
 if (num2%i == 0 && num1%i == 0)
 {
 gcd=i;
 }
 }
 cout << "The Greatest Common Divisor is : "<<gcd;
 return 0;
}
