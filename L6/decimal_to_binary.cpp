#include <iostream>
using namespace std;
int main()
{
  int num;
  printf("Enter a decimal number : ");
  cin >> num;
  // cout<<num<<endl;
  int ans=0, rem;
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
 
    ans = (rem * i) + ans;
    i = i * 10;
    num = num / 2;
  }
  cout << ans << endl;
  cout <<1%2 << endl;
}