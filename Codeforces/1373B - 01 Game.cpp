#include<bits/stdc++.h>
#include<string.h>
using namespace std;
typedef long long int lli;
#define forn(i,n) for(i=0;i<n;i++)
 
void solve()
{
    string s;
    lli c=0,i,d=0,m;
    cin>>s;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='0')
        c++;
        else
        d++;
    }
    m=min(c,d);
    if(m%2==0)
    cout<<"NET"<<"\n";
    else
    cout<<"DA"<<"\n";
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin>>t;
    while(t--)
    {
    	solve();
    }
}
