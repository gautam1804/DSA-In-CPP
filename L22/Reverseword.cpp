#include <iostream>
using namespace std;
#include <bits/stdc++.h>

void reverseWord(string s)
{    int i=0;
     string temp;
     int n=s.length();
    while(i<n)
    {   
        char word[n]={s[i]};
          cout<<word;
        if(s[i]!=' '&& s[i]!='\0')
        {
           i++; 
        }
      
        i++;
    }
}

 void reverseString(string s)
    {
        cout<<s<<endl;
        int st=0;
        int e=s.length()-1;
        while(st<e)
        {

 for(int i=0;i<s.length();i++)
        {  
            swap(s[st++],s[e--]);
            cout<<st<<e<<endl;
        }
        }
       
           cout<<s<<endl;
    }
    
int main()
{
   // reverseWord("My name is Gautam");
   reverseString("gautam");
}