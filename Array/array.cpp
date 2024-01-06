#include <iostream>
using namespace std;

void printIntArray(int arr[],int size)
{   
    cout<<"Printing the array : "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void printCharArray(char arr[],int size)
{   
    cout<<"Printing the array : "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int dost[4];
    // cout<<dost[0];
    cout << dost[20]<<endl;

    int num[5]={2,3,5,6};
    cout<<num[3];
    printIntArray(num,5);

    int arraySize=sizeof(num)/sizeof(int);   //Problems with this method
    cout<<arraySize<<endl;
}