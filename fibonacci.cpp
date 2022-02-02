#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int n1=0;
    int n2=1;
    cout<<n1<<" "<<n2<<" ";
    for(int i=2;i<=n;i++)
    {
      
       int n3=n1+n2;
        cout<<n3<<" ";
        swap(n1,n2);
        swap(n2,n3);
    }
    return 0;
}