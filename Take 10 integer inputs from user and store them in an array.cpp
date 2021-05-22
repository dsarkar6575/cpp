//Take 10 integer inputs from user and store them in an array. Now, copy all the elements in another array but in reverse order.

#include<iostream>
using namespace std;
int main()
{
	int a[100],i,j,n;
	for(i=0;i<=9;i++)
	{
		cin>>a[i];
	}
	for(j=9;j>=0;j--)
	{
	    
	    
		cout<<a[j]<<" ";
	}
	
	return 0;
}
