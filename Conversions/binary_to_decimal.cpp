#include <iostream>
using namespace std;
int main()
{
  int num;
  printf("Enter a binary number : ");
  cin >> num;
  // cout<<num<<endl;
  int ans=0, rem;
  int i = 1;
  while (num > 0)
  {
    rem=num%10;
    if(rem==1)
    {
        ans=ans+i;
    }
    num=num/10;
    i=i*2;
  }
  cout << ans << endl;
}