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
    
    lli t;
    cin>>t;
    while(t--)
    {
        lli n,k,i,ans=1,m=1000000007;
        cin>>n>>k;
        
        for(i=0;i<k;i++)
        ans= (ans*n)%m;
        
        cout<<ans<<"\n";
        
    }
}
