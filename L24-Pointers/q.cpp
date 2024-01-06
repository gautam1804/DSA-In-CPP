#include<iostream>
using namespace std;

char toLowerCase(char c)
{   
    if(c>='A'&&c<='Z')
    {
    return c-'A'+'a';

    }
    return c;
}
char toUpperCase(char c)
{
    if(c>='a'&&c<='z')
    {
    return c-'a'+'A';

    }
    return c;
}
int main()
{   string s;

    cout<<"Enter a string"<<endl;
    cin>>s;
    cout<<"your string : "<<s<<endl;
    

    if(s.length()<=2)
    {   
        for(int i=0;i<s.length();i++)
    {
        s[i]=toLowerCase(s[i]);
    }
    }
    else{
        s[0]=toUpperCase(s[0]);
        for(int i=1;i<s.length();i++)
    {
        s[i]=toLowerCase(s[i]);
    }
    }

 cout<<"your string is : "<<s<<endl;

 return 0;

}