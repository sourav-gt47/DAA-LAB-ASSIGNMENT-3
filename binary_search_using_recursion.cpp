#include<bits/stdc++.h>
using namespace std;
int binaryrecursion(int arr[], int left, int right, int x){
int mid= left + (right-left)/2;
  if(left<=right){

  if(arr[mid]==x){
    return mid+1;
}

else if(arr[mid]<x){
    return binaryrecursion(arr,mid+1,right,x);
}

else{
   return binaryrecursion(arr,left,mid-1,x);
}


}
  
return -1;
}

int main()

{  int n , x;
   cout<<"Enter the size::";
   cin>>n;
   int arr[n];
   cout<<"Enter elements::";
   for(int i=0;i<n;++i)cin>>arr[i];
   cout<<"Enter the element to be searched for::";
   cin>>x;

    int result = binaryrecursion(arr, 0, n - 1, x);
    (result == -1)
        ? cout << "Element is not present in array!!"<<endl
        : cout << "Element is present at position::" << result<<endl;
    return 0;
}
