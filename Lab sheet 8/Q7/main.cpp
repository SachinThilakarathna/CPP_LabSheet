#include <iostream>
using namespace std;
int main()
{
 int a[10][10], trans[10][10], r, c, i, j;
 cout << "Enter rows and columns of matrix (should be less than or equal to 10) :\n";
 cin >> r >> c;
 // Storing element of matrix entered by user in array a[][].
 cout <<"\nEnter elements of matrix: " << endl;
 for(i = 0; i < r; ++i)
 for(j = 0; j < c; ++j)
 {
 cout << "Enter elements a" << i + 1 << j + 1 << ": ";
 cin >> a[i][j];
 }
 // Displaying the matrix a[][]
 cout << endl << "Entered Matrix: " << endl;
 for(i = 0; i < r; ++i){
 for(j = 0; j < c; ++j)
 {
 cout << " " << a[i][j];
 }
 cout<<endl;
 }
 // Finding transpose of matrix a[][] and storing it in array trans[][].
 for(i = 0; i < r; ++i)
 for(j = 0; j < c; ++j)
 {
 trans[j][i]=a[i][j];
 }
 // Displaying the transpose,i.e, Displaying array trans[][].
 cout << endl << "Transpose of Matrix: " << endl;
 for(i = 0; i < c; ++i){
 for(j = 0; j < r; ++j)
 {
 cout << " " << trans[i][j];
 }
 cout<<endl;
 }
 return 0;
}
