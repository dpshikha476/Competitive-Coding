#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;


int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        lli n,s=0,i,ans;
        cin>>n;
        lli a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        if(s==n)
        ans= 0;
        
        else if(s<n)
        ans= 1;
        
        else if(s>n)
        ans= s-n;
        
        
        cout<<ans<<"\n";
    }
    
}