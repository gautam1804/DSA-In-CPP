#include<iostream>
using namespace std;

void sayDigit(int n)
{
    string arr[]={"zero","one","two","three","four","five","six","seven","eight","nine","ten"};
    if(n==0)
    {
        return;
    }
   
    int digit=n%10;
    n=n/10;
    sayDigit(n);
    cout<<arr[digit]<<" ";
    return;

}

int main()
{
    cout<<"Enter a number: ";
    int n;
    cin>>n;

    sayDigit(n);
    return 0;
}