#include <iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
    if (size == 0 || size == 1)
        return 1;
    if (arr[0] > arr[1])
        return 0;
    else
    {
        return (isSorted(arr + 1, size - 1));
    }
}
int main()
{
    int arr[] = {2, 5, 7, 3, 8, 9};
    (isSorted(arr, 5)) ? cout << "Array is sorted" : cout << "not sorted";
    return 0;
}