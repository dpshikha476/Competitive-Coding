#include<bits/stdc++.h>
#include<vector>
#define inf 0x3f3f3f3f;
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        ios_base::sync_with_stdio (false) ; 
        cin.tie(0) ; 
        cout.tie(0) ;
        long long int d,a,b,m,x,v,c,i,l,r,mid,ans;
        cin>>d>>a>>m>>b>>x;
        l=0;
        r=inf;
        while(l<=r)
        {
            mid= (l+r)/2;
            v=mid/(m+1);
            c=d+b*v+a*(mid-v);
            if(c>=x)
            ans=mid,r=mid-1;
            
            else
            l=mid+1;
        }
        cout<<ans<<"\n";
    }
}
