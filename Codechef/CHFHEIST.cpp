#include<bits/stdc++.h>
#include<unordered_set>
#include<string.h>
#include<vector>
using namespace std;
typedef long long int lli;


int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli D,d,p,q,ans=0,n;
        cin>>D>>d>>p>>q;
        
        n=D/d;
        ans= d*(n*p+q*((n*(n-1))/2));
        
        if(D%d >0)
        ans+=(D%d)*(p+n*q);
        
        cout<<ans<<"\n";
    }
}
