#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, int>p ={1,3};
    cout<<p.first<<" "<<p.second;
    cout<<endl;
    pair<int, pair<int, int>>q={5,{6,7}};
    cout<<q.first<<" "<<q.second.first<<" "<<q.second.second<<endl;
    pair<int ,int>arr[]={{8,9},{10,11},{12,13}};
    cout<<arr[0].first<< " "<<arr[1].second;
}