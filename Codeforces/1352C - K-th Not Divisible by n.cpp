#include <bits/stdc++.h>
using namespace std; 
typedef long long int lli;

lli solve(lli n,lli k)
{
    if(k<n)
    return k;
    
    lli ks = k-(n-1);
    
    if(ks%(n-1)==0)
        return  (ks/(n-1)+1)*n-1;
    
    else
        return ks%(n-1)+(ks/(n-1)+1)*n;
}

int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli n,k;
        cin>>n>>k;
        
        cout<<solve(n,k)<<"\n";
        
        
    }
}
