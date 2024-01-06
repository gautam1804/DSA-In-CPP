#include <iostream>
using namespace std;

int PowerOf2(int n)
{

    if (n == 0)
    {
        return 1;
    }
    // int smallerProblem = PowerOf2(n - 1);
    // int biggerProblem = 2 * smallerProblem;

    // return biggerProblem;

    return 2*PowerOf2(n-1);
}

int main()
{

    int n;
    cout << "Enter the number for finding the power of 2 : " << endl;
    cin >> n;

    int ans = PowerOf2(n);
    cout << "Power ans is : " << ans << endl;

    return 0;
}