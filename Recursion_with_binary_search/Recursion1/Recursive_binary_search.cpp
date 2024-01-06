#include<iostream>
using namespace std;
void print(int *arr, int s, int e)
{
    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool binarySearch(int arr[],int left,int right,int key)
{   
    
    //base case
    
    if(left>right)
    {
        return false;
    }
    
    //processing
    int mid=left+(right-left)/2;
    if(arr[mid]==key)
    {
        return true;
    }
    if(arr[mid]>key)
    {
        print(arr,left,mid-1);
        binarySearch(arr,left,mid-1,key);
    }
    else
    {   print(arr,mid+1,right);
        binarySearch(arr,mid+1,right,key);
    }
    
}
int main()
{   
    int a[]={3,5,9,13,27};
    print(a,0,4);
    (binarySearch(a,0,4,13))?cout<<"Present":cout<<"Absent";
    return 0;
}