#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0) // corner case --1
        return b;

    if (b == 0) //---2
        return a;

    if (a == b)
        return a;

    if (a > b)
        return gcd((a - b), b);

    if (a < b)
        return gcd(a, (b - a));
}
int main()
{
    int a, b;
    cout << "Enter two numbers::";
    cin >> a >> b;
    cout <<"GCD::"<< gcd(a, b) << endl;
    return 0;
}