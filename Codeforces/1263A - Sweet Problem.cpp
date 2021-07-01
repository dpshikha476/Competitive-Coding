
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli r,g,b,x,y,c=0,z;
        cin>>r>>g>>b;
        
        if(r>=g+b)
        cout<<g+b<<"\n";
        else if(b>=g+r)
        cout<<g+r<<"\n";
        else if(g>=r+b)
        cout<<r+b<<"\n";
        else
        cout<<(r+g+b)/2<<"\n";

    }
    
    return 0;
}