#include <iostream>
using namespace std;
int main()
{
 char character;
 cout << "Enter the character : "<<endl;
 cin >> character;
 switch (character)
 {
 case 'a'...'z':
 cout <<"Lower case character"<<endl;
 break;
 case 'A'...'Z':
 cout <<"Upper case character"<<endl;
 break;
 case '0'...'9':
 cout <<"Digit character" <<endl;
 break;
 default:
 cout <<"Special character"<<endl;
 break;
 }
 return 0;
}
