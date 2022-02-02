// #include<bits\stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     bool isprime=true;
//     if(n==0||n==1)
//     {
//         isprime=false;
//     }
//     else
//     {
//         for(int i=2;i<=n/2;i++)
//     {
//         if(n%i==0)
//        isprime=false;
//        break;
//     }
//     }
//     if(isprime)
//     cout<<"That is prime number.";
//     else 
//     cout<<"That is not a prime number.";

//     return 0;
// }
//function call
#include<bits\stdc++.h>
using namespace std;
bool isprime(int n)
{
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
  if (isprime(n))
      cout<<"The number is prime number.";
      else
      cout<<"The number is not a prime number.";
      return 0;
}