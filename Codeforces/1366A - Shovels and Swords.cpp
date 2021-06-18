#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

lli solve(lli a, lli b)
{
    return min(a,min(b,(a+b)/3));
}

int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli a,b;
        cin>>a>>b;
        
        cout<<solve(a,b)<<"\n";
    }
}