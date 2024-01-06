#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    int a=0;
    int b=1;
    int c;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++)
    {
       c=a+b;
       a=b;
       b=c;
       cout<<c<<" ";
    }
}