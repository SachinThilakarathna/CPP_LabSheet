#include <iostream>
using namespace std;
int main()
{
 int base,expo,power=1;
 cout<< "Enter the base number : ";
 cin>>base;
 cout<< "Enter the exponent : ";
 cin>>expo;
 for(int i=1;i<=expo;i++){
 power=power*base;
 }
 cout<< "The power is : "<<power;
 return 0;
}
