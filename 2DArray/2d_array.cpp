#include <iostream>
using namespace std;

void rowWiseSum(int arr[][3],int row1,int col1)
{
    int sum=0;
    for(int row=0;row<row1;row++)
    {
        for(int col=0;col<col1;col++)
    {   
        sum=sum+arr[row][col];
    } 
    cout<<sum<<endl;
    sum=0;
    }
}
void colWiseSum(int arr[][3],int row1,int col1)
{
    int sum=0;
    for(int col=0;col<col1;col++)
    {
        for(int row=0;row<row1;row++)
    {   
        sum=sum+arr[row][col];
    } 
    cout<<sum<<endl;
    sum=0;
    }
}



void largestRowWiseSum(int arr[][3],int row1,int col1)
{
    int sum=0;
    int max=INT8_MIN;
    int maxIndex=-1;
    for(int row=0;row<row1;row++)
    {
        for(int col=0;col<col1;col++)
    {   
        sum=sum+arr[row][col];
    } 
    if(max<sum)
    {
        max=sum;
        maxIndex=row;
    }
    sum=0;
    cout<<max<<" is the sum of the row of index "<<maxIndex<<endl;
    }
}
int main()
{
    int arr[3][3];
    cout<<"Enter array values : ";
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<3;col++)
    {
        cin>>arr[row][col];
    } 
    }
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<3;col++)
    {
        cout<<arr[row][col]<<"  ";
    } 
    cout<<endl;
    }
    // cout<<"row wise sum : "<<endl;

    // rowWiseSum(arr,3,3);
    // cout<<"column wise sum : "<<endl;

    // colWiseSum(arr,3,3);

    cout<<"largest row wise sum : "<<endl;

    largestRowWiseSum(arr,3,3);
}