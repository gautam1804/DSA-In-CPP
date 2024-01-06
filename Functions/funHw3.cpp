#include<iostream>
using namespace std;

int fibo()
{   int n;
    cout<<"Enter the value of index n to get the fibbonaci digit : ";
    cin>>n;

    int a=0,b=1;
    int c=0;
    if(n==1) return a;
    if(n==2) return 1;
    for(int i=3;i<=n;i++)
{
    c=a+b;
    a=b;
    b=c;
}
return c;
}

int main()
{
    cout<<fibo();
}