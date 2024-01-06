#include <iostream>
using namespace std;

void print(int *arr, int s, int e)
{
    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int findPivot(int *arr, int size)
{
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    while (s<e)
    {
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    // return s;   
    return arr[s];
}
int main()
{
    int arr[] = {7, 9, 1,2,3};
    print(arr,0,4);
    int t = findPivot(arr, 5);
    // cout<<t<<" is the index of pivot"<<endl;
    cout<<t<<" is the pivot element"<<endl;

    return 0;
}