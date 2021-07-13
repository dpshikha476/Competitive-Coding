#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n,m,i,ans=0;
    cin>>n>>m;
    unordered_map<lli, lli> s,v;
    
    for(i=1;i<=n;i++)
    s[i%5]++;
    
    for(i=1;i<=m;i++)
    v[i%5]++;
    
    for(auto it=s.begin();it!=s.end();it++)
    {
        lli x=it->first;
        auto j=v.find((5 - x)%5);
        if(j!=v.end())
        {
            ans+=it->second*j->second;
        }
        
    }

    cout<<ans<<"\n";   
    
    return 0;
 
}
