#include<iostream>
using namespace std;

void TOH(int n,char A, char B,char C)
{ 
	if(n>0){
    TOH(n-1, A, C ,B  );
	cout<<"Move Disk "<<n<<" from "<<A<<" to "<<C<<endl;
	TOH(n-1,B , A , C  );
    }
	//SOURCE AUXILIARY DESTINAION
	//   A       B        C
}


int main()
{ 
	int n;
	
	cout<<"Enter no. of disks::";	
	cin>>n;
	TOH(n,'A','B','C');
	
	return 0;
}
