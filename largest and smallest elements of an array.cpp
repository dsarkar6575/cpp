//Find the largest and smallest elements of an array.

#include<iostream>
using namespace std;
int main()
{
	int a[100],max=0,min=a[0];
	for(int i=0;i<=9;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<=9;i++){
		if(a[i]>max)
		max=a[i];
	}
	for(int i=0;i<=9;i++)
	{
		if(a[i]<min)
		min=a[i];
	}
	cout<<"The maximum value is : "<<max<<endl;
	cout<<"The minimum value is : "<<min;
}
