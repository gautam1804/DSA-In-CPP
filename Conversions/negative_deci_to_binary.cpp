#include <iostream>
using namespace std;
int main()
{
int num,n;
  printf("Enter a decimal number : ");
  cin >> n;

  if(n<0) num=-(n);
  cout<<num<<endl;

  int ans=0,ans2=0, rem;
  int i = 1;
  while (num > 0)
  {
    if (num % 2 == 0)
    {
      rem = 0;
    }
    else
    {
      rem = 1;
    }
    num = num / 2;
    ans = (rem * i) + ans;
    i = i * 10;
  }
  while(ans>0)
  {
    rem=ans%10;
    if(rem==1)
    {
        ans2=0;
    }
    else
    {
        ans2=1;
    }
    ans2=
    ans=ans/10;

  }
  cout << ans << endl;

}