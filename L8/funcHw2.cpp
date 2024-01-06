#include <iostream>
using namespace std;

int fun(int n)
{
    int count = 0;
    while (n > 0)
    {
        if (n & 1)
        {
            count++;
        }
        n=n>>1;
    }

    return count;
}
void setBits()
{
    int a, b;
    cout << "Enter two numbers to get their set bits: ";
    cin >> a;
    cin >> b;
    // 2 and 3 in binary 10 and 11 thus set bits are 3(no of ones).
    int c= fun(a);
    int d= fun(b);
    cout<<"The number of 1's are : "<<c+d<<endl;
}
int main()
{
    setBits();
}