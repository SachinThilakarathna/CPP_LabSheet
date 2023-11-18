#include <iostream>
using namespace std;
int main()
{
 int i,num,fac=1;
 cout<< "Input a number to find the factorial : ";
 cin>>num;
 for(i=1;i<=num;i++){
 fac=fac*i;
 }
 cout<< "The factorial of the given number is : "<<fac;
 return 0;
}
