#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int countup=0, countlow=0;
    cin>>s;
    for(int i=0; i<s.length(); i++)
    {
        if(isupper(s[i]))
            countup++;
        else
            countlow++;
    }
    if(countup>countlow)
    {
        char ch;
        for(int i=0; i<s.length(); i++)
        {
            ch = toupper(s[i]);
            cout<<ch;
        }
    }
    else
    {
        char ch;
        for(int i=0; i<s.length(); i++)
        {
            ch = tolower(s[i]);
            cout<<ch;
        }
    }

    return 0;
}
