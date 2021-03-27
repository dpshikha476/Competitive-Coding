#include<bits/stdc++.h>
#include<string.h>
using namespace std;
typedef long long int lli;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        if(a==b)
        {
            cout<<0<<"\n";
            continue;
        }
        
        lli i,j,k,ans=0;
        
        for(k=1;k<= min(a.length(),b.length()); k++)
        {
            for(i=0; i+k<= a.length();i++)
            {
                for(j=0; j+k<= b.length();j++)
                {
                    if(a.substr(i,k)==b.substr(j,k))
                    ans=max(ans,k);
                }
            }
        }
        
        cout<< a.length()+ b.length() - 2*ans<<"\n";
    }
}