#include <bits/stdc++.h>
using namespace std; 
typedef long long int lli;

lli solve(lli a[], lli n)
{
    lli s=0,c=0;
    
    if(n==1)
    return 0;
    
    for(lli i=0;i<n;i++)
        s+=a[i];
    
    if(s%n)
        return -1;
    else
    {
        for(lli i=0;i<n;i++)
            if(a[i]>s/n)
                c++;
        
        return c;
    }
 
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
