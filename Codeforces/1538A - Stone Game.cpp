
#include <bits/stdc++.h>
using namespace std; 
typedef long long int lli;

lli solve(lli a[], lli n)
{
    lli mi=INT_MAX,s=0,k=0,ma=INT_MIN,x,y,z,t,u,g;
    
    for(lli i=0;i<n;i++)
    {
        if(a[i]<mi)
        {
            mi=a[i];
            s=i;
        }
        if(a[i]>ma)
        {
            ma=a[i];
            k=i;
        }  
    }
    
    x= max(s+1,k+1);
    y= max(n-s,n-k);
    t= s+1+(n-k);
    u= n-s+k+1;
    
    z=min(x,min(y,min(t,u)));
    
    return z;
    
}
 
int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli n;
        cin>>n;
        lli a[n];
        for(lli i=0;i<n;i++)
        cin>>a[i];
        
        cout<<solve(a,n)<<"\n";
    }
}
