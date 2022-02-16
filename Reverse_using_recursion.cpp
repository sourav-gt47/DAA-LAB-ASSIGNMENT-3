#include <bits/stdc++.h>
using namespace std;

int reverse(int num, int temp) // initially temp=0
{

    if (num == 0)
        return temp;
    else
        temp = (temp * 10) + num % 10;
    return (reverse(num / 10, temp));
}

int main()
{
    int n;
    cout << "Enter an integer number::";
    cin >> n;
    cout << "Reverse::" << reverse(n, 0)<<endl;
    return 0;
}