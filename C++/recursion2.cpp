#include<bits/stdc++.h>
using namespace std;
void print(int i,int n)
{
    if(i>n)
    return;
    cout<<"Name"<<endl;
    print(i+1,n);
}
int main()
{
    int a;
    cout<<"Enter the no of times the word has to be printed:";
    cin>>a;
    print(1,a);
}