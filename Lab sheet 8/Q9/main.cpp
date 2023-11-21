#include<iostream>
using namespace std;
main()
{
 int c, d, first[3][3], second[3][3], sum[3][3];
 cout << "Enter the elements of first matrix\n";
 for ( c = 0 ; c < 3 ; c++ )
 for ( d = 0 ; d < 3 ; d++ )
 cin >> first[c][d];
 cout << "Enter the elements of second matrix\n";
 for ( c = 0 ; c < 3 ;c++ )
 for ( d = 0 ; d < 3 ; d++ )
 cin >> second[c][d];
 for ( c = 0 ; c < 3 ; c++ )
 for ( d = 0 ; d < 3 ; d++ )
 sum[c][d] = first[c][d] + second[c][d];
 cout << "Sum of entered matrices:-\n";
 for ( c = 0 ; c < 3 ; c++ )
 {
 for ( d = 0 ; d < 3 ; d++ )
 cout << sum[c][d] << "\t";
 cout << endl;
 }
 return 0;
}
