#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli c,m,x,ans=0,d;
        cin>>c>>m>>x;
        
        d=max(c,m)-min(c,m);
        x+=d;
        if(c>m)
        c-=d;
        else
        m-=d;
        
        ans=min(c,min(m,x));
        c-=ans;
        m-=ans;
        x-=ans;
        
        ans+=(c+m)/3;
        cout<<ans<<"\n";

    }
    
    return 0;
}