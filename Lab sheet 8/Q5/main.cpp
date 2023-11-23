#include<iostream>
using namespace std;
int main()
{
 int a[5];
 int t,i;
 for(int i=0;i<5;i++)
 {
 cout << "Enter a number\n";
 cin >> a[i];
 }
 t=a[4];
 for(i = 4; i>=1; i--)
 {
 a[i]=a[i-1];
 }
 a[0]=t;
 cout<<"After the Shift of the elements: \n";
 for(i = 0; i<=4; i++)
 {
 cout << a[i] << "\n";
 }
 return 0;
}
