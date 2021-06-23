#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;


int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli a,b;
        cin>>a>>b;
        cout<<a*((to_string(b+1).length())-1)<<"\n";
    }
}