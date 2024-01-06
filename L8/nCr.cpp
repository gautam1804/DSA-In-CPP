#include<iostream>
using namespace std;

int factorial(int f)
{
int ans=1;
 for(int i=f;i>1;i--)
    {
    ans=ans*f;
    f--;
    }
    return ans;
}
int nCr()
{ 
    int n,r;
    cout<<"Enter value of n :"<<endl;
    cin>>n;
    cout<<"Enter value of r :"<<endl;
    cin>>r;
    
    int num=factorial(n);
    int denom=factorial(r)*factorial(n-r); 
    return num/denom;
}

int main()
{
    int an=nCr();
    cout<<an<<endl;
    
}