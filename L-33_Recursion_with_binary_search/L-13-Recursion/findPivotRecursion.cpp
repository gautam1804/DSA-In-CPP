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

int findPivot(int *arr, int s, int e)
{
    if (s == e)
        return arr[s];

    int mid = s + (e - s) / 2;

    if (arr[mid] >= arr[0])
    {   
        return findPivot(arr,mid+1,e);    
    }
    else
    {
         return findPivot(arr,s,mid);
    }
}
int main()
{
    int arr[] = {7, 9, 1, 2, 3};
    print(arr, 0, 4);
    int t = findPivot(arr, 0, 4);
    // cout << t << " is the index of pivot" << endl;
    cout<<t<<" is the pivot element"<<endl;

    return 0;
}