#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> q;

    q.push(4);
    q.push(5);
    q.push(8);
    q.emplace(6);
    while(!q.empty())
    {
        cout<<q.top();
        q.pop();
    }
    cout<<endl;
    //min heap
    priority_queue<int, vector<int>,greater<int>>p ;
    p.push(4);
    p.push(5);
    p.push(8);
    p.push(6);
    while(!p.empty())
    {
        cout<<p.top();
        p.pop();
    }
   
}