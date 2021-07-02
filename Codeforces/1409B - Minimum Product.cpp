#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli a,b,x,y,n,s,t,u,v;
        cin>>a>>b>>x>>y>>n;
        
        s=a-min(n,a-x);
        if(a-x<n)
        u=b-min(n-(a-x),b-y);
        else
        u=b;
        
        t=b-min(n,b-y); 
        if(b-y<n)
        v=a-min(n-(b-y),a-x); 
        else
        v=a; 
        
        cout<<min(s*u,t*v)<<"\n";
    }
    
    return 0;
}