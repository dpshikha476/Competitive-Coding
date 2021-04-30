#include<bits/stdc++.h>
#include<string.h>
#include<vector>
using namespace std;
typedef long long int lli;
  

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    lli t;
    cin>>t;
    while(t--)
    {
        lli r,b,d,mi,ma;
        cin>>r>>b>>d;
        mi=min(r,b);
        ma=max(r,b);
        if(ma>mi*(d+1))
        cout<<"NO"<<"\n";
        else
        cout<<"YES"<<"\n";
    }
    
   
}
