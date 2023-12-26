#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(1);
    v.emplace_back(3);
    v.emplace_back(5);
    v.emplace_back(8);
    v.emplace_back(20);
    vector<pair<int,int>>vec;
    vec.push_back({5,6});
    vec.emplace_back(5,6);
//the difference here is that emplace back assumes the inputs to be a pair so there is no need to specify the additional brackets
    for(vector<int>::iterator it =v.begin(); it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    v.erase(v.begin()+1);
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    v.erase(v.begin()+2,v.begin()+3);
     for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    v.insert(v.begin(),50);
     for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
}