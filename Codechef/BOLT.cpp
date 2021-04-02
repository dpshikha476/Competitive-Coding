#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main() 
{
    lli t;
    cin>>t;
    while(t--)
    {
        double k1,k2,k3,v,s;
        cin>>k1>>k2>>k3>>v;
        s= k1*k2*k3*v;
        s= (double)100.0/(double)s;
        double value = (int)(s * 100 + .5);
        if((double)value / 100 < 9.58)
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
    }
    return 0;
}
