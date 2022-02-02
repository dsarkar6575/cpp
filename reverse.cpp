#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no:";
    cin>>n;
    int ans=0;
    while(n!=0)
    {
        int digit=n%10;
        ans=(digit*10)+ans;
        n=n/10;
    }
    cout<<"The result is :"<<ans<<" ";
    return 0;
}