#include<iostream>
using namespace std;

void merge(int* arr, int s,int e)
{   
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;

    int* first=new int[len1];
    int* second=new int[len2];

    int mainArrayIndex=s;
    for(int i=0;i<len1;i++)
    {
        first[i]=arr[mainArrayIndex++];
    }
    mainArrayIndex=mid+1;

    for(int i=0;i<len2;i++)
    {
        second[i]=arr[mainArrayIndex++];
    }

    int firstIndex=0;
    int secondIndex=0;
    mainArrayIndex=s;

    while(firstIndex<len1&&secondIndex<len2) //bhul gaya tha
    {
        if(first[firstIndex]<second[secondIndex])
        {
            arr[mainArrayIndex++]=first[firstIndex++];
        }
        else{
            arr[mainArrayIndex++]=second[secondIndex++];
        }
    }

    while(firstIndex<len1)
    {
        arr[mainArrayIndex++]=first[firstIndex++];
    }
    while(secondIndex<len2)
    {
        arr[mainArrayIndex++]=second[secondIndex++];
    }

    //most imp but tu bhul gaya
    delete []first;
    delete []second;
}
void mergeSort(int* arr,int s,int e)
{
if(s>=e)
{
    return;
}

int mid=s+(e-s)/2;

mergeSort(arr,s,mid);

mergeSort(arr,mid+1,e);

merge(arr,s,e);
}

int main()
{

int arr[5]={6,3,4,2,1};
mergeSort(arr,0,4);
for (int i = 0; i < 5; i++)
{
    cout<<arr[i]<<" ";
}cout<<endl;

return 0;

}

