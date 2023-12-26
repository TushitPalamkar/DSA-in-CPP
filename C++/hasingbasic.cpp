
#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,3,4,5,1,2};
    int hash[8]={0};
    int n;
    for(int i=0;i<8;i++)
    {
        hash[a[i]]++;
    }
    cout<<"Enter the no whose indexed needs to be checked:";
    cin>>n;
    cout<<"Hash key: "<<hash[n];
}
