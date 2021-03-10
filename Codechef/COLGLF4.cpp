#include<bits/stdc++.h>
using namespace std;

long long int solve(long long int n, long long int e, long long int h, long long int a, long long int b, long long int c)
{
    long long int i,j,r,s,x,y,mi;
    
    vector<long long int> ans;
    vector<long long int> m;
    
    for(i=0;i<=n+1;i++)
    m.push_back(i);
    
    for(j=0;j<=n;j++)
    {
        x=lower_bound(m.begin(),m.end(),(2*n-e-2*j))-m.begin();
        y= upper_bound(m.begin(),m.end(),(h-3*j))-m.begin()-1;
        
        if(y<x || x==n+1)
        continue;
        if(y==n+1 && y+3*j>h)
        continue;
        
        if(c>a)
        s=(x<(n-j)?x:(n-j));
        else
        s=(y<(n-j)?y:(n-j));
        
        r=n-s-j;
        
        if(s+2*j>=2*n-e && s+3*j<=h)
        ans.push_back(a*r+b*j+c*s);
    }
    
    if(ans.size()==0)
    return -1;
    else
    {
        mi= ans[0];
        for(i=0;i<ans.size();i++)
        mi=min(mi,ans[i]);
    }
    
    return mi;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,e,h,a,b,c,m;
        cin>>n>>e>>h>>a>>b>>c;
        m=solve(n,e,h,a,b,c);
        cout<<m<<"\n";
    }
    
}
