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
    cout << endl;
}

void inputIntArray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
}

int getMax(int a[], int size)
{
    int maxi = INT8_MIN;
    for (int i = 0; i < size; i++)
    {
        // if(maxi<a[i])
        // {
        //     maxi=a[i];
        // }

        maxi=max(maxi,a[i]);   // works same as above if statement
    }

    return maxi;
    
}

int getMin(int a[], int size)
{
    int mini = INT8_MAX;
    for (int i = 0; i < size; i++)
    {
        // if(a[i]<mini)
        // {
        //     mini=a[i];
        // }
        mini=min(mini,a[i]);
    }

    return mini;
    
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
    cout<<"Maximum value is : "<<getMax(a,size)<<endl;
    cout<<"Minimum value is : "<<getMin(a,size)<<endl;

}