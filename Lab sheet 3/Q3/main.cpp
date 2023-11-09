#include <iostream>
using namespace std ;
int main()
{
int total,average,num1,num2,num3;

cout << "Enter Fist Number\t:";
cin>> num1;
cout << "Enter second Number\t:";
cin>> num2;
cout << "Enter Third Number\t:";
cin>> num3;

total= num1+num2+num3;
average= total/ 3;

cout << "Total is\t:"<< total<<endl;
cout << "Average is\t:" << average << endl;

return 0;

}
