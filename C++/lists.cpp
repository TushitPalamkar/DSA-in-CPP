#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(2);
    l.push_back(3);
    l.push_front(4);
    l.pop_back();
    for(auto it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<" ";
    
    }
}