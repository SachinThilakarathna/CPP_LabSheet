#include <iostream>
using namespace std;
void swap_floats (float & a, float & b);
void sort3 (float & x, float & y, float & z);
int main()
{
 float x,y,z;
 cout<< "Please Enter three float values :\n";
 cin>>x>>y>>z;
 sort3(x,y,z);
 cout<<"After sorting the float values:\n";
 cout<<x<<" "<<y<<" "<<z;
}
void swap_floats (float & a, float & b)
{
 float temp = a;
 a = b;
 b = temp;
}
void sort3 (float & x, float & y, float & z)
{
 float temp;
 if (x <= y && y <= z) // the values are already in order;
 ; // do nothing
 else if (x <= y) // then z < y (or we'd have stopped above)
 {
 swap_floats (z, y); // After this call, y < z and x <= z are true
 // but we don't know how x and y compare.
 if (x > y)
 swap_floats (x, y); // Now x < y <= z must be true.
 }
 else // If neither of the above is true, then we know that y < x
 {
 swap_floats (x, y); // After this call, x < y is true.
 if (y <= z) // the values are now in correct order;
 ; // do nothing
 else // it must be the case that z < y
 {
 swap_floats (y, z); // After this call, y <= z is true.
 if (x > y)
 swap_floats (x, y);
 }
 }
}
