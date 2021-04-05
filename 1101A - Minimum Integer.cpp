#include<bits/stdc++.h>
#include<string.h>
using namespace std;
typedef long long int lli;
 
lli solve(lli l, lli r, lli d)
{
    if(d<l)
    return d;
    
    else
    {
        return r+ (d-r%d);
    }
}
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        lli l,r,d;
        cin>>l>>r>>d;
        cout<<solve(l,r,d)<<"\n";
    }
    
}