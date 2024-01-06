#include <iostream>
using namespace std;

void printIntArray(int arr[], int size)
{
    cout << "Printing the array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void inputIntArray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
}

int binarySearch(int a[], int size, int key)
{
    int mid, start, end;
    start = 0;
    end = size - 1;
    mid = (start + end) / 2;

    while (start <= end )
    {
        if (a[mid] == key)
        {
            return mid;
        }

        if (a[mid] > key)
        {
            end = mid - 1;
        }

        if (a[mid] < key)
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    int a[size]; // Gatiya Practice
    // int a[10000000000]={2,3};    Gatiya to nahi he, uppar wale se accha he

    cout << "Enter the values : ";
    inputIntArray(a, size);
    printIntArray(a, size);

    cout << "Enter the number to search in array : " << endl;
    int num;
    cin >> num;
    int ans = binarySearch(a, size, num);
    if (ans != -1)
    {
        cout << "Number " << num << " is present at index " << ans << endl;
    }
    else
    {
        cout << "Number " << num << " is not present" << endl;
    }
}