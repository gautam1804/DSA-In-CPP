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

bool linearSearch(int a[], int size, int num)
{
    // bool flag=false;
    for (int i = 0; i < size; i++)
    {
        if (num == a[i])
        {
            return true;
        }
    }

    // Optimization : don't use the flag variable .

    // if(flag)
    // {
    //     return true;
    // }
    // return false;

    // return flag;
    return false;
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

    if (linearSearch(a, size, num))
    {
        cout << "Number " << num << " is present" << endl;
    }
    else
    {
        cout << "Number " << num << " is not present" << endl;
    }
}