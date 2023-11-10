#include <iostream>

using namespace std;

int main()
{
int x,y,z;
cout<< "Enter x\t:";
cin>>x;
cout<< "Enter y\t:";
cin>>y;
cout<< "Enter z\t:";
cin>>z;

cout<< " (x+y).z\t="<< (x+y)*z<< endl;
cout<< " x.y + y.z\t=" << x*y + y*z<< endl;

return 0;
}
