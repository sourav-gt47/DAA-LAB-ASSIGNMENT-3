#include <bits/stdc++.h>
using namespace std;
int largest(int arr[], int size)
{
    if (size == 1)
        return arr[0]; // if whole array is traversed and length=1

    else
        return max(arr[size - 1], largest(arr, size - 1));
}

int main()
{
    int n;
    cout << "Enter the size of the array::";
    cin >> n;
    int arr[n];
    cout << "Enter the elements::";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    cout << "LARGEST::" << largest(arr, n)<<"\n";
    return 0;
}