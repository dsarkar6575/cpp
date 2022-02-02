#include<iostream>
using namespace std;
int powofn(int a,int b)
{
    int ans=1;
    for(int i=1;i<=b;i++)
    {
      ans=a*ans;
    }
    return ans ;
}

int main()
{
    int a,b,c,d,e,f,g,h,i,j;
    cout<<"Enter the value of number and power: "<<endl;
    cin>>a>>b;
   cout<<powofn(a,b)<<endl;
    cout<<"Enter the value of number and power: "<<endl;
       cin>>c>>d;
   cout<<powofn(c,d)<<endl;
    cout<<"Enter the value of number and power: "<<endl;
       cin>>e>>f;
   cout<<powofn(e,f)<<endl;
    cout<<"Enter the value of number and power: "<<endl;
       cin>>g>>h;
   cout<<powofn(g,h)<<endl;
    cout<<"Enter the value of number and power: "<<endl;
       cin>>i>>j;
   cout<<powofn(i,j);
   return 0;
}