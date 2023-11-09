#include <iostream>

using namespace std;

int main()
{ float s1,s2,s3,s4,s5,sum;

cout <<" Subject 1 :";
cin>>s1;
cout <<" Subject 2 :";
cin>> s2;
cout <<" Subject 3 :";
cin>> s3;
cout <<" Subject 4 :";
cin>> s4;
cout <<" Subject 5 :";
cin>> s5;

sum=s1+s2+s3+s4+s5;

cout<<" "<<endl;
cout<<"Total is :"<<sum<<endl;
cout<<"Percentage is :"<< sum*100/500<<endl;

return 0;
}
