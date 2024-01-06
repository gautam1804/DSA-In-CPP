#include <iostream>
using namespace std;

void print(int *arr, int s, int e)
{
    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

 int binarySearchRecursive(int x, int s, int e) {
        if (s > e) {
            return e;
        }
        
        long long int mid = s + (e - s) / 2;
        long long int sq = mid * mid;
        
        if (sq == x) {
            return mid;
        } else if (sq < x) {
            return binarySearchRecursive(x, mid + 1, e);
        } else {
            return binarySearchRecursive(x, s, mid - 1);
        }
    }

    int mySqrt(int x) {
        return binarySearchRecursive(x, 0, x);
    }
    double morePrecision(int n,int precision,int tempSol)
    {
        double factor=1;
        
        double ans=tempSol;
        for (double i = 0; i < precision; i++)
        {
            factor=factor/10;
            for (double j = ans; j*j<n; j=j+factor)
            {
                ans=j;
            }       
        }
        return ans;
    }
int main()
{
    double t=morePrecision(10,3,mySqrt(10));
    cout<<t<<" is the square root of "<<10<<endl;

    return 0;
}