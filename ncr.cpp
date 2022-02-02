#include<bits\stdc++.h>
using namespace std;
int fact(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
     fact=fact*i;
    }
    return fact;
}
int ncr(int n,int r)
{
    int num=fact(n);
    int demon=fact(r)*fact(n-r);
    return num/demon;
}
int main()
{
    int n,r;
    cin>>n>>r;
    cout<<"The answare is:"<<ncr(n,r);
    return 0;
}