#include <iostream>

using namespace std;

int main()
{
float distance,time,speed;

cout << "Distance in KM:";
cin>> distance;
cout << "Time in Hours :";
cin>> time;

speed = distance/time;

cout<<"Speed in Kilometers per hour :"<<speed<<endl;
cout<<"Speed in Miles per hour :"<< speed*0.621371<<endl;
return 0;

}
