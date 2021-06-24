
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;


int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli n,s,k,i,x,ans=INT_MAX;
        cin>>n>>s>>k;
        vector<lli> a;
        for(i=0;i<k;i++)
        {
            cin>>x;
            a.push_back(x);
        }
        
        for(i=0;i<=k;i++)
        {
            if(s-i >= 1 && find(a.begin(), a.end(), s-i) == a.end())
            {
                ans=i;
                break;
            }
            else if(s+i <= n && find(a.begin(), a.end(), s+i) == a.end())
            {
                ans=i;
                break;
            }
        }
        
        cout<<ans<<"\n";
    }
    
    return 0;
}
