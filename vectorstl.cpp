#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    vector<int> a(5,1);
    vector<int> last(a);
    cout<<"print last:"<<endl;
    for(int i:last){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"size:"<<v.size()<<endl;
    v.push_back(1);
    cout<<"capacity:"<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"capacity:"<<v.capacity()<<endl;
    v.push_back(5);
    cout<<"capacity:"<<v.capacity()<<endl;
    cout<<"size:"<<v.size()<<endl;

    cout<<"Element of 2nd Index:"<<v.at(2)<<endl;
    cout<<"Front:"<<v.front()<<endl;
    cout<<"Last:"<<v.back()<<endl;
    cout<<"Before pop:"<<endl;
    for(int i:v){
          cout<<i<<" ";
    }cout<<endl;
    v.pop_back();
    cout<<"After pop:"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;
       cout<<"Before clear:"<<endl;
       cout<<v.size()<<endl;
       v.clear();
    cout<<"After clear:"<<endl;
    cout<<v.size()<<endl;
    cout<<endl;

}