#include<iostream>
using namespace std;
int main()
{
 int x,y;
 cout<<"Enter number x:";
 cin>>x;
 cout<<"Enter number y:";
 cin>>y;
 x=x*y;
 y=x/y;
 x=x/y;
 cout<<"After swapped numbers: x is:"<<x<<" y is:"<<y;
 return 0;
}
