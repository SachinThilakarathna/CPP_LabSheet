#include <iostream>
using namespace std;
int main()
{
 int a,b,c;
 cout << "Enter the value for a,b,c"<<endl;
 cin >> a >> b >> c;
 if (a>b && a>c) {
 cout << "A is the largest number : "<< a <<endl;
 }
 else if (b>c) {
 cout << "B is the largest number : "<< b <<endl;
 }
 else {
 cout << "C is the largest number : "<< c <<endl;
 }
 return 0;
}
