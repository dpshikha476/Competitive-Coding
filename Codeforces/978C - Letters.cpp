#include<bits/stdc++.h>
#include<string.h>
#include<vector>
using namespace std;
typedef long long int lli;
 
lli solve( lli a[], lli n, lli b)
{
    lli l,r,mid,k;
    l=0;
    r=n-1;
    while(l<=r)
    {
        mid= (r-l)/2 +l;
        
        if(a[mid]>=b)
        {
            k=mid;
            r=mid-1;
        }
        
        else
        l=mid+1;
        
    }
    
    return k;
 
}  

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    lli n,m,i;
    cin>>n>>m;
    lli a[n],b;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(i>0)
        a[i]=a[i]+a[i-1];
    }
    
   while(m--)
   {
       cin>>b;
       
       lli k=solve(a,n,b);
       
       if(k==0)
       cout<<k+1<<" "<<b<<"\n";
       else
       cout<<k+1<<" "<<b-a[k-1]<<"\n";
   }
   
}



