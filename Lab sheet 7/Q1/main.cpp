#include <iostream>
using namespace std;
int is_prime (int n);
int main()
{
 int x;
 cout<< "Please Enter the Number :\n";
 cin>>x;
 if (is_prime(x))
 cout<<"Number is a prime number";
 else
 cout<<"Number is not a prime number";
}
int is_prime (int n)
{
if (n <= 1)
return 0; // n cannot be prime if n <= 1.
int trial_divisor = 2;
while (trial_divisor < n && n % trial_divisor != 0)
 ++trial_divisor;
if (trial_divisor == n) // n must be prime
 return 1;
else
 return 0; // n is not prime.
}
