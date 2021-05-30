#include<bits/stdc++.h>
#include<unordered_set>
#include<string.h>
#include<vector>
using namespace std;
typedef long long int lli;


int main()
{
    lli i,n,j,ans=0,m,x=0,y=0,c=0,d=0;
    cin>>n;
    lli a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            if(x==0)
            {
                c=0;x=1;
            }
            ++c;
            y=0;
        }
        else
        {
            if(y==0)
            {
                d=0;y=1;
            }
            ++d;
            x=0;
        }
        
        m=min(c,d);
        ans=max(m,ans);
    }
    
    cout<<2*ans;
}