#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;


int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli n,m,s=0,x,i,y;
        cin>>n>>m;
        x=n/(m*10);
        for(i=1;i<=10;i++)
        {
            s+=(i*m)%10;
        }
        
        s=s*x;
        
        if(x*m*10==n)
        cout<<s<<"\n";
        else
        {
            y=n-(x*m*10);
            for(i=1;i*m<=y;i++)
            {
                s+=(i*m)%10;
            }
            cout<<s<<"\n";
        }
        
        
    }
    
    return 0;
}
