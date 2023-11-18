#include <iostream>
using namespace std;
int main()
{
 int num,i,re_num=0;
 cout << "Input Number to reverse : ";
 cin >> num;
 while(num>0)
 {
 re_num = (num%10)+(re_num*10);
 num = num/10;
 }
 cout << "Reversed Number : " << re_num;
 return 0;
 return 0;
}
