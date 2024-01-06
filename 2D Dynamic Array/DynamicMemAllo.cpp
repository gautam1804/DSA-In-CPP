#include<iostream>
using namespace std;

int main()
{      
    cout<<"Enter size of the array"<<endl;
    int n;
    cin>>n;

    int* arr=new int[n];

    for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
    for(int i=0;i<n;i++)
{
    cout<<arr[i]<<endl;
}

delete [] arr;
return 0;
}