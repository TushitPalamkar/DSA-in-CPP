#include<iostream>
using namespace std;
void matread(int a[10][10],int m, int n)
{
    
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }

}
void print(int a[10][10],int m, int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<< " ";
        }
        cout<<endl;
    }
}
int main()
{
    int a[10][10];
    int m,n;
    cout<<"Enter the no of rows and columns :";
    cin>>m>>n;
    matread(a,m,n);
    cout<<endl;
    print(a,m,n);
}