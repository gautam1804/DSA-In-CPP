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

int findLargestMinDistance(vector<int> &boards, int k)
{
int n=boards.size();
int s=0;
int sum=0;
int ans=-1;
for(int i=0;i<n;i++)
{
    sum+=boards[i];
}
int e=sum;

int mid=s+(e-s)/2;
while (s<=e){

    if(isPossibleSol(boards,n,k,mid))
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
vector<int> a = {5,5,5,5};
    int ans = findLargestMinDistance(a,2);
    cout << "Maximum number of boards a painter can paint : " << ans << endl;
    return 0;

return 0;
}