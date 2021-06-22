#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;


int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli n,k;
        cin>>n>>k;
        if((n%2!=k%2) || (pow(k,2)>n))
        cout<<"NO"<<"\n";
        else
        cout<<"YES"<<"\n";
        
    }
}
