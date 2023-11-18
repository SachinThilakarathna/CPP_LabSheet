#include <iostream>
using namespace std;
int main()
{
 int num,i,n_num=0;
 cout << "Input Number : ";
 cin >> num;
 while(num>0)
 {
 n_num = (num%10)+(n_num);
 num = num/10;
 }
 cout << "Sum of digits : " <<n_num;
 return 0;
}
