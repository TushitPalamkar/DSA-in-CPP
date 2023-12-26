#include<iostream>
using namespace std;
void sum(int i,int n)
{
    if(i>n)
    {
    cout<<n;
    return;
    }
    sum(i+1,n+i);
}

int main()
{
    sum(0,3);
}