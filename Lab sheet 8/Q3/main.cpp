#include<iostream>
using namespace std;
int main()
{
 int x[10],y[5],z[5];
 for(int i=0;i<10;i++)
 {
 cout << "Enter a number\n";
 cin >> x[i];
 }
 for(int i=0;i<5;i++)
 {
 y[i]=x[i];
 }
 for(int i=0,j=5;j<10;i++,j++)
 {
 z[i]=x[j];
 }
 cout << "\nOriginal Array Numbers are:\n";
 for(int i=0;i<10;i++)
 {
 cout << x[i] << " ";
 }
 cout<<"\nAfter Splitting :\n";
 cout << "\nArray 01 Numbers are:\n";
 for(int i=0;i<5;i++)
 {
 cout << y[i] << " ";
 }
 cout << "\nArray 02 Numbers are:\n";
 for(int i=0;i<5;i++)
 {
 cout << z[i] << " ";
 }
 return 0;
}
