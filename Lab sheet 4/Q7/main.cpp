#include <iostream>
using namespace std;
int main()
{
 int x;
 cout <<"Enter the year : "<<endl;
 cin >>x;
 if ( (x%100!=0 && x%4==0) || (x%400==0) )
 {
 cout <<"Leap year"<<endl;
 }
 else
 {
 cout <<"Not a leap year"<<endl;
 }
 return 0;
}
