#include <iostream>
using namespace std;
void digit_name (int digit_value);
int main()
{
 int x;
 cout<< "Please Enter a Number between 1 to 9 :\n";
 cin>>x;
 cout<<"The English name of the number you entered is :";
 digit_name(x);
}
void digit_name (int digit_value)
{
switch (digit_value)
{
case 1 : cout << "one"; break;
case 2 : cout << "two"; break;
case 3 : cout << "three"; break;
case 4 : cout << "four"; break;
case 5 : cout << "five"; break;
case 6 : cout << "six"; break;
case 7 : cout << "seven"; break;
case 8 : cout << "eight"; break;
case 9 : cout << "nine"; break;
default : cout << "digit error" << endl;
}
}
