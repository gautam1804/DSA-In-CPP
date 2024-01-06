#include <iostream>
#include<vector>
using namespace std;
void print(vector<int> arr, int s, int e)
{
    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int binarySearch(vector<int> arr, int l,int r, int target)
{   int mid=l+(r-l)/2;
print(arr, l, r);
  cout << "the value at mid is: " << arr[mid] << endl;
    if(l>r)
        return -1;
    if(arr[mid]==target)
        return mid;
    if(arr[mid]<target)
    {
        return binarySearch(arr, mid+1,r,target);
    }
    else {
        return binarySearch(arr, l, mid - 1, target);
    }
}
int search(vector<int> &nums, int target) {
    cout<<"heloo"<<binarySearch(nums,0,nums.size()-1, target)<<endl;
    return binarySearch(nums,0,nums.size()-1, target);
}

int main()
{
    vector<int> arr = {5, 9, 14, 15, 16 ,22 ,23, 24, 28, 29, 34 };
    cout << "running" << endl;
    int t = search(arr, 9);
    cout<<t<<endl;

    return 0;
}