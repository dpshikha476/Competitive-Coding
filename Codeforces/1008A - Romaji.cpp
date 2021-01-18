#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    long long int i,l,d=0;
    l=s.length();
    if(l==1)
    {
        if(s[0]=='a' || s[0]=='e' || s[0]=='i' || s[0]=='o' || s[0]=='u'|| s[0]=='n')
        d=0;
        else
        d=1;
    }
    else
    {
    for(i=0;i<l-1;i++)
    {
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='n')
        {
            if(s[i+1]=='a' || s[i+1]=='e' || s[i+1]=='i' || s[i+1]=='o' || s[i+1]=='u')
            d=0;
            else
            {
                d=1;
                break;
            }
        }
    }
    if(s[l-1]!='a' && s[l-1]!='e' && s[l-1]!='i' && s[l-1]!='o' && s[l-1]!='u' && s[l-1]!='n')
    d=1;
    }
    if(d==1)
    cout<<"NO";
    else
    cout<<"YES";
}