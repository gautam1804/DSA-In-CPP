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
bool binarySearch(int *arr, int size, int target)
{
    // base case
    int l = 0;
    int r = size - 1;
    
    if (size == 0 || l > r)
        return false;
    int mid = l + ((r - l) / 2);
    if (arr[mid] == target)
        return true;
    if (target > arr[mid])
        return (binarySearch((arr + mid + 1), size - (mid + 1), target));
    if (target < arr[mid])
         
        return (binarySearch(arr, size - (mid + 1), target));
}
int main()
{
    int arr[] = {5, 9, 14};
    cout << "running" << endl;
    bool t = binarySearch(arr, 3, 3);
    (t) ? cout << "number exists" : cout << "not exists" << endl;

    return 0;
}