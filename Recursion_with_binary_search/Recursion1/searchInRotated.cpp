#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>& arr, int s, int e)
{
    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int getPivot(vector<int>& arr, int s, int e)
{
    
    if (s == e)
    {   
        return s;
    }
    int mid = s + (e - s) / 2;

    if (arr[mid] >= arr[0])
    {
        getPivot(arr, mid + 1, e);
    }
    else
    {
        getPivot(arr, s, mid);
    }
}


int binarySearch(vector<int>& a, int s,int e, int key)
{
  
    if(s>e)
    {
        return -1;
    }
    int mid = s + (e-s)/ 2;
        if (a[mid] == key)
        {
            return mid;
        }

        if (a[mid] > key)
        {
   print(a,s,e);
   cout<<key<<endl;
            binarySearch(a, s,mid-1,key);
        }

        
        else
        {
            binarySearch(a,mid+1,e,key);
        }
        
    
}


int search(vector<int>& arr, int n, int k)
{
    int p=getPivot(arr, 0,n-1);
    if(k>=arr[p]&&k<=arr[n-1])
    {
       return binarySearch(arr, p, n-1, k);
    }
    else{
       return binarySearch(arr, 0, p-1, k);
    }
    
}

int main()
{   
    vector<int> arr={8,9,4,5};
    int i=search(arr,4,3);
    cout<<i<<endl;
    return 0;
}
