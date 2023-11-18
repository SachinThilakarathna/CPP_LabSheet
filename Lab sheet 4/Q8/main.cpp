#include <iostream>
using namespace std;
int main()
{
 int score;
 cout <<"Enter the score : "<<endl;
 cin >>score;
 if (score>=0 && score<=100)
{
 if (score==100){
 cout << "Grade A"<<endl;
 cout << "Superb"<<endl;
 } else if (score>=90){
 cout << "Grade A"<<endl;
 cout << "Excellent"<<endl;
 } else if (score>=80){
 cout << "Grade B"<<endl;
 cout << "Very Good"<<endl;
 } else if (score>=70){
 cout << "Grade C"<<endl;
 cout << "Good"<<endl;
 } else if (score>=60) {
 cout << "Grade D"<<endl;
 cout << "Average"<<endl;
 } else {
 cout << "Grade F"<<endl;
 cout << "Weak"<<endl;
 }
}
 else {
 cout <<"Invalid score"<<endl;
 }
 return 0;
}
