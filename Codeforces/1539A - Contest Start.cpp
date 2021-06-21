#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli n,x,t,z=0;
        cin>>n>>x>>t;
        cout<< max(z,n-(t/x))*(t/x)+ min(n-1,(t/x)-1)*min(n,(t/x))/2<<"\n";
    }
}
