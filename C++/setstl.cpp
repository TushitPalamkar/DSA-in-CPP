#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    s.insert(3);
    s.emplace(2);
    s.insert(1);
    s.insert(5);
    
    for(auto it=s.find(2);it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    
}