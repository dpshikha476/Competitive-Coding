#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli n,x=INT_MAX,y=INT_MIN;
        cin>>n;
        if(n==1)
        {
            lli l,r;
            cin>>l>>r;
            cout<<0<<"\n";
        }
        else 
        {
            while(n--)
            {
                lli l,r;
                cin>>l>>r;
                x=min(x,r);
                y=max(y,l);
            }
            
            if(y-x <0)
            cout<<0<<"\n";
            else
            cout<<y-x<<"\n";
        }

    }
    
    return 0;
}