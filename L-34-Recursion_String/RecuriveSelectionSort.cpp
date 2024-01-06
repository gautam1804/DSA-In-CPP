#include <iostream>
using namespace std;

void print(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }cout<<endl;
}

void SelectionSort(int *arr, int n)
{  
    
     if (n == 1||n==0)
    {
        return;
    }
    for(int i=1;i<n;i++)
   {
    if(arr[0]>arr[i])
    {
        swap(arr[0],arr[i]);
    }
   }
    SelectionSort(arr+1,n-1);

}

int main()
{
    int arr[] = {5, 2, 6, 8, 1};
    print(arr, 5);
    SelectionSort(arr,5);
    cout<<endl;
    print(arr, 5);

    return 0;
}