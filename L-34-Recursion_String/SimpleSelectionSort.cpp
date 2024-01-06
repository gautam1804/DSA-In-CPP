#include <iostream>
using namespace std;

void print(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void SelectionSort(int *arr, int n)
{  
    for(int j=0;j<n-1;j++)
{

   for(int i=j+1;i<n;i++)
   {
    if(arr[j]>arr[i])
    {
        swap(arr[j],arr[i]);
    }
   }
}

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