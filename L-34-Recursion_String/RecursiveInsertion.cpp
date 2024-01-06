#include <iostream>
using namespace std;

void print(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void insertionSort(int *arr, int i, int n)
{
    if (i==n)
        return;

    int j;
    int temp = arr[i];
    for (j = i - 1; j >= 0; j--)
    {
        if (arr[j] > temp)
        {
            arr[j + 1] = arr[j];
        }
        else
        {
            break;
        }
    }
//yha par j=0 he
    arr[j + 1] = temp;
    insertionSort(arr, i + 1, n);
}

int main()
{
    int arr[] = {5, 2, 6, 8, 1};
    print(arr, 5);
    insertionSort(arr, 1, 5);
    cout << endl;
    print(arr, 5);

    return 0;
}