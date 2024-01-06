#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    bool isNotPrime=false;
    for(int i=2;i<=n-1;i++)
    {
       if(n%i==0)
       {
       cout<<n<<" is not a prime number"<<endl;
       isNotPrime=true;
       break;
       }
    }
    if(isNotPrime==false)
    {
        cout<<n<<" is a prime number"<<endl;
    }
}