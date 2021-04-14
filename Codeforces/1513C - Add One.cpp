#include<bits/stdc++.h>
#include<string.h>
#include<vector>
using namespace std;
typedef long long int lli;
 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    lli t,i,len=200005,mod=1000000007;
    vector<lli> dp;
    cin>>t;
    for(i=0;i<9;i++)
    dp.push_back(2);
    
    dp.push_back(3);
    
    for(i=10;i<len;i++)
    dp.push_back((dp[i-9]+dp[i-10])%mod);
    
    while(t--)
    {
        lli n,m,d,ans=0;
        cin>>n>>m;
        
        while(n>0)
        {
            d=n%10;
            ans+= ((m+d <10) ? 1: dp[m+d-10]);
            ans=ans%mod;
            n=n/10;
        }
        cout<<ans<<"\n";
    }
    
}
