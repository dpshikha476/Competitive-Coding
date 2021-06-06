#include<bits/stdc++.h>
#include<unordered_set>
#include<string.h>
#include<vector>
using namespace std;
typedef long long int lli;


int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli xa,xb,Xa,Xb,ans;
        cin>>xa>>xb>>Xa>>Xb;
        
        ans= (Xa+xa-1)/xa;
        ans+=(Xb+xb-1)/xb;
        
        cout<<ans<<"\n";
    }
}
