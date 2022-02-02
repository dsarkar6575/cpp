#include<bits\stdc++.h>
using namespace std;
bool isodd(int n)
{
     if(n&1)
    
      return true;

  return false;
}
int main()
{
    int n;
    cin>>n;
 if(isodd(n))
 {
     cout<<"The number is odd.";
 }
 else{
     cout<<"The number is even.";
 }
 
   return 0;
}