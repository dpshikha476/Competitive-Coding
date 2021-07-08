#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
 
int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli a,b,x,y,c=0;
        cin>>a>>b;
        if(a==b)
        cout<<0<<" "<<0<<"\n";
        else
        {
            x=abs(a-b);
            
            cout<<x<<" "<<min(a%x,x-a%x)<<"\n";
        }
        
    }
    
    return 0;
 
}
