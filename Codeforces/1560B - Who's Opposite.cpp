#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

lli solve(lli a,lli b,lli c)
{
    lli d,n;
    d=abs(a-b);
    
    if(d==1)
    return -1;
    
    n=2*d;
    
    if(c>n || a>n || b>n)
    return -1;
    
    if(c+d <=n)
    return c+d;
    else
    return c-d;
    
}
 
int main()
{
   lli t;
   cin>>t;
   while(t--)
   {
       lli a,b,c;
       cin>>a>>b>>c;
       
       cout<<solve(a,b,c)<<"\n";
       
   }
 
}
