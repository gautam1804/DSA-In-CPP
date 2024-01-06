#include<iostream>
using namespace std;

void printCountTailRecursion(int n)
{
    if(n==0)
    {
        return ;
    }
    cout<<n<<" ";
    printCountTailRecursion(n-1);
    return ;
}
void printCountHeadRecursion(int n)
{
    if(n==0)
    {
        return ;
    }
    printCountHeadRecursion(n-1);
    cout<<n<<" ";
    return ;
}
int main()
{
     int n;
    cout << "Enter the number for finding the counting: " << endl;
    cin >> n;

    cout<<"Tail recursion : "<<"    ";
    printCountTailRecursion(n);
    cout<<endl;
    cout<<"Head recursion : "<<"    ";
    printCountHeadRecursion(n);
    
    return 0;
}