\\Initialize and print all elements of a 2D array.
#include<iostream>
using namespace std;
int main()
{
	int a[100][100],i,j;
	for(i=0;i<=1;i++)
	{
	    for(j=0;j<=3;j++)
		{
		    cin>>a[i][j];
		}
	}
	for(i=0;i<=1;i++)
	{
	    for(j=0;j<=3;j++)
		{
		    cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}

	
	return 0;
}
