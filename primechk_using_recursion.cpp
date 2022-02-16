#include <bits/stdc++.h>
using namespace std;

int isprime(int n, int i)
{

    if (n <= 2)
        return (n == 2) ? 1 : 0;
    if (n % i == 0)
        return 0;
    if (i * i > n)
        return 1;

      return isprime(n , i+1);  
}
int main()
{   int n;
    cout<<"Enter any number::";
    cin>>n;
    isprime(n ,2) ?cout<<"Prime number"<<endl:cout<<"Not a prime number"<<endl;  
    return 0;
}