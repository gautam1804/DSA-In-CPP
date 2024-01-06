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

void printCharArray(char arr[], int size)
{
    cout << "Printing the array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void inputIntArray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
}

int sumOfArray(int arr[], int size)
{
    int sum = 0;
    cout << "Printing the sum of array : " << endl;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << endl;
    return sum;
}

// using temp array
void reverseArrayGhatiya(int a[], int size)
{
    int temp[size];
    for (int i = 0; i < size;)
    {
        for (int j = size - 1; j >= 0; j--)
        {
            temp[i] = a[j];
            i++;
        }
    }

    printIntArray(temp, size);
}
void reverseArrayBadhiya(int a[], int size)
{
    int start = 0;
    int end = size - 1;
    // for (int i = 0; i < size / 2; i++)
    // {
    //     swap(a[start], a[end]);
    //     end--;
    //     start++;
    //     if (start > end)
    //     {
    //         break;
    //     }
    // }

while(start<=end)
{
    swap(a[start],a[end]);
    start++;
    end--;
}
    printIntArray(a, size);
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

    cout << "The reversed elements are : " << endl;
    // reverseArrayGhatiya(a,size);
    reverseArrayBadhiya(a, size);
}