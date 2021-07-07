
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;


int main()
{
    lli n,i,os=0,es=0,op=0,ep=0,ans=0;
    cin>>n;
    vector<lli> a(n);
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(i%2==0)
        es=es+a[i];
        else
        os=os+a[i];
    }
    
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        es=es-a[i];
        else
        os=os-a[i];
        if(ep+os == op+es)
        ++ans;
        
        if(i%2==0)
        ep=ep+a[i];
        else
        op=op+a[i];
    }
   
    cout<<ans<<"\n";
    
    return 0;

}