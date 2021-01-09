#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define forn(i,n) for(i=0;i<n;i++)
 
void solve()
{
    lli n,x,i,s=0,an,ab,s2=0,d;
    cin>>n>>x;
    lli a[n];
    forn(i,n)
    cin>>a[i];
    forn(i,n)
    s=s+a[i];
    
    if(s%x==0)
    an=s/x;
    else
    {
        d=s%x;
        an=(s+x-d)/x;
    }
    forn(i,n)
    {
         
    if(a[i]%x==0)
    ab=a[i]/x;
    else
    {
        d=a[i]%x;
        ab=(a[i]+x-d)/x;
       
    }
     s2=s2+ab;
    }
    cout<<an<<" "<<s2<<"\n";
 
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