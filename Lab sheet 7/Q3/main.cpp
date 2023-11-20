#include <iostream>
using namespace std;
int gcd (int num1, int num2);
int reduce (int & num, int & denom);
int main()
{
 int x,y;
 cout<< "Please Enter the numerator and the denominator of a fraction :\n";
 cin>>x>>y;
 reduce(x,y);
 cout<<"Reduced numerator and denominator is:"<<x<<"/"<<y;
}
int gcd (int num1, int num2)
{
 if (num1 <= 0 || num2 <= 0) // a parameter is not positive
 return 0;
 while (num1 != num2) {
 if(num1 > num2)
 num1 = num1 - num2;
 else
 num2 = num2 - num1;
 }
 return num2;
}
int reduce (int & num, int & denom)
{
if (num <= 0 || denom <= 0)
 return 1;
else
{
 int common = gcd (num, denom);
 num /= common;
 denom /= common;
}
}
