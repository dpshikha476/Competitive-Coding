#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli n,i,c=0,ans=0;
        cin>>n;
        lli a[n];
        unordered_map<lli, lli> m;
        
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            m[a[i]-(i+1)]++;
        }
        
        for(auto it=m.begin();it!=m.end();it++)
        if(it->second > 1)
        {
            c=it->second;
            ans+=(c*(c-1))/2;
        }
        
        cout<<ans<<"\n";
        
    }
    return 0;
 
}
