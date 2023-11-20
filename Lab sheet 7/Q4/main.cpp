#include <iostream>
using namespace std;
void swap_floats (float & a, float & b);
int main()
{
 float x,y;
 cout<< "Please Enter two float values :\n";
 cin>>x>>y;
 swap_floats(x,y);
 cout<<"After swapping the float values:\n";
 cout<<"First value :"<<x<<"\nSecond value :"<<y;
}
void swap_floats (float & a, float & b)
{
 float temp = a;
 a = b;
 b = temp;
}
