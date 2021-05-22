\\Write a program to find the sum and product of all elements of an array.
#include<iostream>
using namespace std;
int main()
{
	int a[100],i,j,sum=0,product=1;
	for(i=0;i<=3;i++)
	{
		cin>>a[i];
	}
	for(j=0;j<=3;j++)
	{
	   sum=sum+a[j]; 
	    product=product*a[j];
		
	}
	cout<<sum<<endl;
		cout<<product;
	
	return 0;
}
