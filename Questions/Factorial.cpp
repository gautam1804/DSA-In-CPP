#include<iostream>
using namespace std;

int fact(int n)
{
    int biggerProblem=0;
    int smallerProblem=0;
    if(n==0)
    {
        return 1;
    }
    smallerProblem=fact(n-1);
    biggerProblem=n*smallerProblem;
    
    return biggerProblem;
}

int main()
{

    int n;
    cout<<"Enter the number for finding the factorial : "<<endl;
    cin>>n;

    int ans =fact(n);
    cout<<"Factorial is : "<<ans<<endl;

    return 0;
}