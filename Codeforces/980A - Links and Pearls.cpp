#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    long long int i,c=0,d=0;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='-')
        c++;
        else
        d++;
    }
    if(d==0)
    cout<<"YES"<<"\n";
    else if(c%d==0)
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";
}
