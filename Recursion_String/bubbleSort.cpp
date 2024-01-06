#include <iostream>
using namespace std;

void print(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void bubbleSort(int *arr, int size)
{
    // base case
    if (size == 1||size==0)
    {
        return;
    }
    // processing


    //TUNE JO KIYA

    // int maxi = INT8_MIN;
    // int maxiIndex;
    // for (int i = 0; i < size; i++)
    // {

    //     if (arr[i] > maxi)
    //     {
    //         maxi = arr[i];
    //         maxiIndex=i;
            
    //     }
    // }
    // swap(arr[maxiIndex],arr[size-1]);

    //OPTIMIZED

    for(int i=0;i<size-1;i++)
{
    if(arr[i]>arr[i+1])
    {
        swap(arr[i],arr[i+1]);
    }
}
    // Recursive call
    bubbleSort(arr,size - 1);

}

int main()
{
    int arr[] = {5, 2, 6, 8, 1};
    print(arr, 5);
    bubbleSort(arr,5);
    cout<<endl;
    print(arr, 5);

    return 0;
}