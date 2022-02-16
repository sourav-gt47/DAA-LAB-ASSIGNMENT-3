#include<bits/stdc++.h>
using namespace std;

void d_to_b(int num){

if(num==1){
cout<<"";

}
else
d_to_b(num/2); //tail recursion
cout<<num %2;
} 

int main()
{ int dec;
cout<<"Enter any decimal number::";
cin>>dec;
cout<<"Binary equivalent::";
d_to_b(dec);
cout<<endl;
return 0;
}