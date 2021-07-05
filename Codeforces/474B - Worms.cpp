#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

lli solve(lli a[], lli n, lli x)
{
    lli m,l,r,k;
    l=0;
    r=n-1;
    
    while(l<=r)
    {
        m=(r-l)/2 + l;
        
        if(x<=a[m])
        {
            k=m;
            r=m-1;
        }
        
        else
        l=m+1;
    }
    
    return k+1;
    
}

int main()
{
    lli n,q,i;
    cin>>n;
    lli a[n];
    
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(i>0)
        a[i]+=a[i-1];
    }
    
    cin>>q;
    
    while(q--)
    {
        lli x;
        cin>>x;
        
        cout<<solve(a,n,x)<<"\n";
    }
    
    return 0;

}
