#include<iostream>
using namespace std;

int giveSum(int *arr,int size)
{
    //base case
    if(size==0)
        return 0;
    // int sum=arr[0]+giveSum(arr+1,size-1);
    // return sum;
    return (arr[0]+giveSum(arr+1,size-1));
}
int main()
{
    int arr[] = {3,2,5,50,6};
    int sum=giveSum(arr,5);
    cout<<sum<<endl;

    return 0;
}