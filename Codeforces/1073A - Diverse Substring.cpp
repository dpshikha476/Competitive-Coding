#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    lli n,i,d=0;
    cin>>n;
    
    string s;
    cin>>s;
    
    for(i=0;i<n-1;i++)
    {
        if(s[i]!=s[i+1])
        {
            cout<<"YES"<<"\n";
            cout<<s[i]<<s[i+1]<<"\n";
            d=1;
            break;
        }
    }
    
    if(d==0)
    cout<<"NO"<<"\n";
    
}