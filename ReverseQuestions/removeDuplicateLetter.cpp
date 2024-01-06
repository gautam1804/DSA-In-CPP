#include <iostream>
using namespace std;
#include <bits/stdc++.h>
string removeDuplicates(string s) {
    cout<<"2"<<endl;
        while(s.length()!=2)
        {
            cout<<"3"<<endl;
            for(int i=0;i<s.length()-1;i++)
            {
                if(s[i]==s[i+1])
                {
                    s.replace(i,2,"");
                }
            }
        }
        return s;
    }

 

int main()
{
    cout<<"1"<<endl;
 string t=removeDuplicates("abbaca");
 cout<<"10"<<endl;
 cout<<t<<endl;
}