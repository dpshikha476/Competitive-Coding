#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef long long int lli;

lli power(lli x)
{
    lli f=1;
    for(lli i=0;i<x;i++)
    {
        f=10*f;
    }
    
    if(x==0)
    return 1;
    else
    return f;
    
}

int main()
{
   lli n,l,ans,i,d;
   cin>>n;
   string s=to_string(n);
   l=s.length();

   ans+=l*(n+1);
   for(i=0;i<l;i++)
   {
       d=power(i);
       ans-=d;
   }
   
   cout<<ans<<"\n";
   
   return 0;
   
}