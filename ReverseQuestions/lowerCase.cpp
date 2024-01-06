#include <iostream>
using namespace std;
#include <bits/stdc++.h>

char toLower(char ch)
{
    char temp;
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return ch;
    }
    else
    {
        temp = ch - 'A' + 'a';
        return temp;
    }
}

bool isValid(char ch)
{
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return true;
    }
    return false;
}
bool isPalindrome(string s)
{
    int i = 0;
    int j = s.length() - 1;

    while (i < j)
    {

        if (isValid(s[i]) == false)
        {
            i++;
        }
        if (isValid(s[j]) == false)
        {
            j--;
        }

        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] - 'A' + 'a';
        }
        if (s[j] >= 'A' && s[j] <= 'Z')
        {
            s[j] = s[j] - 'A' + 'a';
        }
        if (s[i] != s[j])
        {

            return false;
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
}
int main()
{
    string s = "A man, a plan, a canal: Panama";
    cout << isValid(s[6]) << endl;
    bool pali = isPalindrome(s);
    if (pali)
    {
        cout << "palindrome" << endl;
    }
    else
    {
        cout << "not palindrome" << endl;
    }
}