#include<bits/stdc++.h>
#include<unordered_set>
#include<string.h>
#include<vector>
using namespace std;
typedef long long int lli;


int main()
{
    lli n,i,k,l,r,mid,ans=0;
    cin>>n>>k;
    lli a[n];
    for(i=0;i<n;i++)
    {
        a[i]=(i+1)*5;
        if(i>0)
        a[i]+=a[i-1];
    }
    
    k=240-k;
    
    l=0;
    r=n-1;
    while(l<=r)
    {
        mid= (r-l)/2 + l;
        
        if(a[mid]<=k)
        {
            ans=mid+1;
            l=mid+1;
        }
        else
        r=mid-1;
    }
    
    cout<<ans<<"\n";
    
}