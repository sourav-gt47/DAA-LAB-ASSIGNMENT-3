#include <bits/stdc++.h>
using namespace std;

int sum_of_digit(int n)
{

    if (n == 0)
        return 0;
    else
        return (n % 10 + sum_of_digit(n / 10));
}

int main()
{
    int num;
    cout << "Enter an integer number::";
    cin >> num;
    cout << "Sum of digit::" << sum_of_digit(num) << endl;
    return 0;
}