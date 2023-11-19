include <iostream>
using namespace std;
int main()
{
 int space, rows ,i,k;
 cout <<"Enter number of rows: ";
 cin >> rows;
 for(i = 1;i <= rows; ++i)
 {
 for(space =1; space<i ; space++)
 {
 cout<<" ";
 }
 for (k=1;k<=(2*(rows-(i-1)))-1;k++)
 {
 cout<<"* ";
 }
 cout << endl;
 }
 return 0;
}
