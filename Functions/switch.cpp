#include<iostream>
using namespace std;

int main()
{
    int n1,n2;
    char o;
    float ans=0;
    cout<<"Enter the first number"<<endl;
    cin>>n1;
    cout<<"Enter the second number"<<endl;
    cin>>n2;
    cout<<"Enter the operation you want to perform"<<endl;
    cin>>o;

    switch (o)
    {
    case '+':
        ans=n1+n2;
        break;
    case '-':
        ans=n1-n2;
        break;
    case '/':
        ans=n1/n2;
        break;
    case '*':
        ans=n1*n2;
        break;
    case '%':
        ans=n1%n2;
        break;
    
    default:
    cout<<"Invalid operator"<<endl;
        break;
    }
    cout<<"The answer is : ";
    cout<<ans<<endl;
}