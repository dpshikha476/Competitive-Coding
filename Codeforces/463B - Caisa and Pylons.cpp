
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;


int main()
{
    lli n;
    cin>>n;
    lli a[n],i,s=0,e=0,ans=0;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
        e+=s-a[i];
        if(e<0)
        {
            ans+=-(e);
            e=0;
        }
        s=a[i];
    }
    
    cout<<ans;
    
    return 0;

}