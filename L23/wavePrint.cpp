#include <iostream>
#include<vector>
using namespace std;
vector<int> wavePrint(int arr[][4], int nRows, int mCols)
{   
    vector<int> v;
for(int j=0;j<mCols;j++)
{
    if(j%2==0)
    {
    for (int i = 0; i < nRows; i++) {
     v.push_back(arr[i][j]);

    }
    }
    
    if(j%2!=0)
    {
    for (int i = nRows-1; i >=0; i--) {
     v.push_back(arr[i][j]);
    }
    }
    
}
 
  return v;  
}

int main()
{
    int arr[3][4];
    cout<<"Enter array values : ";
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<4;col++)
    {
        cin>>arr[row][col];
    } 
    }
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<4;col++)
    {
        cout<<arr[row][col]<<"  ";
    } 
    cout<<endl;
    }
 vector<int> t= wavePrint(arr, 3, 4);
 for (int i = 0; i < t.size(); i++) {
        // Printing the element at
        // index 'i' of t
        cout << t[i] << " ";
    }
    cout << endl;
  }