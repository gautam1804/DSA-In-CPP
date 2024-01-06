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
int findPages(vector<int> &a, int n, int m,int s,int e,int ans)
{
    if(n<m || s>e)
    {
        return ans;
    }
    int mid=s+(e-s)/2;
   
     if (isPossibleSolution(a, n, m, mid))
        {
            
            return  findPages(a, n, m, s, mid-1,mid);
        }
        else{
            return   findPages(a, n, m, mid + 1, e,ans);
            
        }
       
   
}

int main()

{

    vector<int> a = {25 ,46, 28, 49 ,24};
    int s = 0;
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum += a[i];
    }
    int e = sum;
    int ans = findPages(a, 5, 4,s,e,-1);
    cout << "Maximum number of pages a student can read : " << ans << endl;
    return 0;
}