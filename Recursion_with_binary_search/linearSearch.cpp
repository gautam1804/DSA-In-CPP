#include<iostream>
using namespace std;

bool linearSearch(int *arr,int size,int target)
{
    //base case
    if(size==0)
        return false;
    if(arr[0]==target)
    {
        return true;
    }
    return linearSearch(arr+1,size-1,target);
}
int main()
{
    int arr[] = {3,2,5,50,6};
    bool t=linearSearch(arr,5,6);
    (t)?cout<<"number exists":cout<<"not exists"<<endl;

    return 0;
}