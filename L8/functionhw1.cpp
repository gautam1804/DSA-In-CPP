#include <iostream>
using namespace std;

int ap()
{
    int n;
    cout << "Enter the value of n for the nth term in AP: ";
    cin >> n;

    return (3*n)+7;
}

int main()
{
    cout << ap();
}