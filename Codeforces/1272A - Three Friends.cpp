
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define forn(i,n) for(i=0;i<n;i++)
 
void solve()
{
    lli a,b,c,s;
    cin>>a>>b>>c;
    s= abs(a-b)+ abs(a-c) + abs(b-c) ;
    s=s-4;
    if(s>0)
    cout<<s<<"\n";
    else
    cout<<0<<"\n";
 
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