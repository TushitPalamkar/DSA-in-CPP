#include<iostream>
using namespace std;

void printname(int i,int n)
{
    if(i<1)

    return;
        cout<<i<<endl;
printname(i-1,n);
}
int main()
{
    printname(3,3);
}