#include<iostream>
using namespace std;

void update(int n)
{
    n=n+2;
}

//pass by reference
void update2(int& n)
{
    n=n+2;
}
int main()
{
    int n=5;
    int&j=n;

    cout<<j<<endl;
    cout<<n++<<endl;
    cout<<j<<endl;

update(n);
    cout<<n<<endl;
    update2(n);
    cout<<n<<endl;
}



