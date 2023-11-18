#include <iostream>
using namespace std;
int main()
{
 char Letter;
 cout << "Enter the character : "<<endl;
 cin >> Letter;
 switch (Letter)
 {
 case 'a':
 case 'e':
 case 'i':
 case 'o':
 case 'u':
 case 'A':
 case 'E':
 case 'I':
 case 'O':
 case 'U': cout << "Vowel is "<< Letter;
 break;
 default: cout << "Consonant is " << Letter;
 break;
 }
 return 0;
}
