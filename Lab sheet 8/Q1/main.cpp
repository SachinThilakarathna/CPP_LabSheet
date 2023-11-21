#include<iostream>
using namespace std;
int main()
{
 int a[10];
 for(int i=0;i<10;i++)
 {
 cout << "Enter a number:\n";
 cin >> a[i];
 }
 cout << "Numbers are:\n";
 for(int i=0;i<10;i++)
 {
 cout << a[i] << " ";
 }
 int largest = a[0];
 int smallest = a[0];
 for(int i=0;i<10;i++)
 {
 if(a[i]>largest)
 largest = a[i];
 if(a[i]<smallest)
 smallest = a[i];
 }
 cout << "\nLargest "<<largest<<"\nSmallest "<<smallest<<"\n";
 return 0;
}
