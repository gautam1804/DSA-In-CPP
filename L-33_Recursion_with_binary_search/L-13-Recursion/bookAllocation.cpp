#include <iostream>
#include <vector>
using namespace std;

bool isPossibleSolution(vector<int>& arr, int n,int m , int mid)
{
int studentCount=1;
int PageSum=0;

for(int i=0;i<n;i++)
{
    if(PageSum+arr[i]<=mid)
    {
        PageSum+=arr[i];
    }
    else{
        studentCount++;
        if(studentCount>m || arr[i]>mid)
        {
            return false;
        }
PageSum=arr[i];
    }
}
    return true;
}
int findPages(vector<int> &a, int n, int m)
{
    if(n<m)
    {
        return -1;
    }
    int s = 0;
    int sum = 0;
    int ans = -1;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    int e = sum;
    int mid=s+(e-s)/2;
    while (s <= e)
    {
        if (isPossibleSolution(a, n, m, mid))
        {
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
}

int main()

{

    vector<int> a = {12, 34, 67, 90};
    int ans = findPages(a, 4, 2);
    cout << "Maximum number of pages a student can read : " << ans << endl;
    return 0;
}