#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    vector<int>v;
    v.emplace_back(1);
    v.push_back(5);
    v.push_back(2);
    v.emplace_back(6);
    int arr[]={8,9,3,5,2,0};
    sort(v.begin(),v.end());
    for(auto it=v.begin(); it!=v.end();it++)
    {
        cout<<*it<<endl;
    }
    sort(v.begin(),v.end(),greater<int>());
     for(auto it=v.begin(); it!=v.end();it++)
    {
        cout<<*it<<endl;
    }
    int asize=sizeof(arr)/sizeof(int);
    sort(arr,arr+6);
    for( i=0;i<asize;i++)
    {
        cout<<arr[i]<<" " ;
    }
}