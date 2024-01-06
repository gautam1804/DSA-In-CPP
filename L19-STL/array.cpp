#include <iostream>
#include<array>
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
    array<int,4> a={1,2,3,4};

    int arraySize= a.size(); //Problems with this method
for(int i=0;i<arraySize;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"Size: "<<arraySize<<endl;
    cout<<"Element at index 2: "<<a.at(2)<<endl;
    cout<<"Empty or not: "<<a.empty()<<endl;
    cout<<"front number: "<<a.front()<<endl;
    cout<<"Back number: "<<a.back()<<endl;
}