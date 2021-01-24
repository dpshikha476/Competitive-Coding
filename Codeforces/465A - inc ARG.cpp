#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    long long int n,l,i,c=0;
    cin>>n;
    string s,r;
    cin>>s;
    r=s;
    l=s.length();
    for(i=0;i<l;i++)
    {
        if(s[i]=='1')
        r[i]= '0';
        if(s[i]=='0')
        {
            r[i]='1';
            break;
        }
    }
     for(i=0;i<l;i++)
    {
        if(s[i]!=r[i])
        c++;
    }
    cout<<c;
}