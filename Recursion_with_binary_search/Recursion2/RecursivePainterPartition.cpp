#include<iostream>
#include<vector>
using namespace std;

bool isPossibleSol(vector<int>& boards,int n, int k, int mid)
{
    int PainterCount=1;
    int BoardsSum=0;

    for(int i=0;i<n;i++)
    {
        if(BoardsSum+boards[i]<=mid)
        {
            BoardsSum+=boards[i];
        }
        else
        {
            PainterCount++;
            if(boards[i]>mid||PainterCount>k)
            {
                return false;
            }
            BoardsSum=boards[i];
        }

    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k,int n,int s,int e)
{
if(s>e)
{
    return -1;
}
int mid=s+(e-s)/2;

    if(isPossibleSol(boards,n,k,mid))
    {
        int ans=findLargestMinDistance(boards,k,n,s,mid-1);
        if(ans==-1)
        {
            return mid;
        }
        else{
            return ans;
        }
    }
    else{
        s=mid+1;
        return findLargestMinDistance(boards,k,n,mid+1,e);
    }

}

int main()
{
vector<int> a = {48,90};
int n=a.size();
int s=0;
int sum=0;
for(int i=0;i<n;i++)
{
    sum+=a[i];
}
int e=sum;
    int ans = findLargestMinDistance(a,2,n,s,e);
    cout << "Maximum number of boards a painter can paint : " << ans << endl;
    return 0;

return 0;
}