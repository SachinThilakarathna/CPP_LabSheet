#include <iostream>
using namespace std;
int main()
{
 int space, rows ,i,k;
 cout <<"Enter number of rows: ";
 cin >> rows;
 for(i = 1;i <= rows; ++i)
 {
 for(space =rows-i; space >0 ; space--)
 {
 cout<<" ";
 }
 for (k=1;k<=(2*i)-1;k++)
 {
 cout<<"* ";
 }
 cout << endl;
 }
 return 0;
}
