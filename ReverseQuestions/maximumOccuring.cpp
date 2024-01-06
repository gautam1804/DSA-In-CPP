#include <iostream>
using namespace std;

char maxOccur(string s)
{
    
int arr[26]={0};


    for(int j=0;j<s.length();j++)
    {
        if(s[j]>='A'&&s[j]<='Z')
    {
        arr[s[j]-'A']++;
    }
    else{
       arr[s[j]-'a']++;
    }
    }

int max=-1,ans;
for(int i=0;i<26;i++)
{
    if(max<arr[i])
    {
        max=arr[i];
        ans=i;
    }
}
return ans+'a';
}
int main()
{
    string s="GAUTAm";
   char ans= maxOccur(s);
   cout<<ans<<endl;
}