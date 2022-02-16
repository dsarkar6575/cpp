#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string> m;
    m[1]="Dipankar";
    m[2]="sarkar";
    m[13]="chandra";
    m.insert({5,"bheem"});
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"Finding : "<<m.count(3)<<endl;
   // m.erase(13);
    cout<<"After erase: "<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl<<endl<<endl;
    auto it=m.find(5);
    for(auto i=it;i!=m.end();i++)
    {
        cout<<(*i).first<<endl;
    }
}