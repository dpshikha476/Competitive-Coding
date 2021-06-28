
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli n,i,c[3]={0},ans=0,mi;
        cin>>n;
        lli a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            c[a[i]%3]++;
        }
        
        ans=c[0];
        mi=min(c[1],c[2]);
        ans+=mi;
        c[1]-=mi;
        c[2]-=mi;
        ans+=(c[1]+c[2])/3;
        
        cout<<ans<<"\n";
        
    }
    
    return 0;
}