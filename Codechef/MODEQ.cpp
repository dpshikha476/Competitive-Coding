#include<bits/stdc++.h>
#include<unordered_set>
#include<string.h>
#include<vector>
using namespace std;
typedef long long int lli;


int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli n,m,i,j,c=0,x;
        cin>>n>>m;
        
        vector<lli> mod(n+1,1);
        
        for(i=2;i<=n;i++)
        {
            x=m%i;
            c+=mod[x];
            for(j=x;j<=n;j+=i)
            mod[j]++;
        }
        
        cout<<c<<"\n";
    }
    
}
