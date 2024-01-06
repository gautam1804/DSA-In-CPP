#include<iostream>
using namespace std;

int partition(int* arr, int s,int e)
{   

    int pivot=s;
    int count=0;
    for (int i = s+1; i <= e; i++)  //s+1 se glti kr rha th, yha 1 likh rha tha tu
    {
        if(arr[i]<arr[pivot])
        {
            count++;
        }
    }
    int originalPivot=pivot+count;
    swap(arr[pivot],arr[originalPivot]);

    //ye yad nhi rha

    int i=s;
    int j=e;

    while(i<j)
{
    while(arr[j]>arr[originalPivot])
    {   
        j--;
    }
    while(arr[i]<arr[originalPivot])
    {   
        i++;
    }
    if(arr[i]>arr[originalPivot]&&arr[j]<arr[originalPivot])
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
//     else if(arr[i]>arr[originalPivot]&&arr[j]>arr[originalPivot])
//     {   
//         j--;
//     }
//    else if(arr[i]<arr[originalPivot]&&arr[j]<arr[originalPivot])
//     {
//         i++;
//     }
//     else
//     {
//         i++;
//         j--;
//     }
}    

return originalPivot;
    
}
void quickSort(int* arr,int s,int e)
{
if(s>=e)
{
    return;
}

int p=partition(arr,s,e);

quickSort(arr,s,p-1);

quickSort(arr,p+1,e);

}

int main()
{

int arr[7]={9, 9, 9, 8, 2, 3, -6 };
quickSort(arr,0,6);
for (int i = 0; i < 6; i++)
{
    cout<<arr[i]<<" ";
}cout<<endl;

return 0;

}