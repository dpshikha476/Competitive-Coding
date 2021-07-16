
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli s,ans;
        cin>>s;
        
        ans=sqrt(s);
        
        if(ans*ans<s)
        ans+=1;
        
        cout<<ans<<"\n";
    }
    return 0;
 
}
