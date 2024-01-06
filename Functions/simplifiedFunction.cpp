#include<iostream>
using namespace std;

int power()
{ 
    int a,b;
    cout<<"Enter numbers :"<<endl;
    cin>>a;
    cin>>b;
    int ans=1;
    for(int i=1;i<=b;i++)
    {
    ans=ans*a;
    }
    return ans;
}

int main()
{
    int an=power();
    cout<<an<<endl;
    an=power();
    cout<<an<<endl;
    an=power();
    cout<<an<<endl;
    an=power();
    cout<<an<<endl;
}