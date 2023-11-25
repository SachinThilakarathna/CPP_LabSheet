#include<iostream>
using namespace std;
int main()
{
 int a[5];
 int t,i,j;
 for(int i=0;i<5;i++)
 {
 cout << "Enter a number\n";
 cin >> a[i];
 }
 for(i = 0;i<4;i++){
 for(j = i+1;j<5;j++){
 if(a[i]>a[j]){
 t = a[i];
 a[i] = a[j];
 a[j] = t;
 }
 }
 }
 cout << "After Sorting the array :\n";
 for(i = 0;i<5;i++){
 cout << a[i] << " ";
 }
 return 0;
}
