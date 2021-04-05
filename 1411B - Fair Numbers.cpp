#include<bits/stdc++.h>
#include<string.h>
using namespace std;
typedef long long int lli;

bool solve(lli n)
{
    lli x=n;
    
    while(x!=0)
    {
        lli d=x%10;
        if(d>0 && n%d!=0)
        return false;
        
        x=x/10;
    }  
    
    return true;
}
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        lli n;
        cin>>n;
        
        for(lli i=n;;i++)
        {
            if(solve(i))
            {
                cout<<i<<"\n";
                break;
            }
        }
    }
    
}