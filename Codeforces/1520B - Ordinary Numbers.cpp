 
#include<bits/stdc++.h>
#include<unordered_set>
#include<string.h>
#include<vector>
using namespace std;
typedef long long int lli;
  
lli solve(string s)
{
        lli i,l,ans;
        l=s.length(); 
        ans=9*l - (9-(s[0]-'0'));
        lli x= s[0]-'0';
        for(i=1;i<l;i++)
        {
            
            if(s[i]-'0'>x)
            return ans;
            else if(s[i]-'0' == x)
            continue;
            else if(s[i]-'0'<x)
            {
                ans--;
                return ans;
            }  
        }
        
        return ans;
}
int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        cout<<solve(s)<<"\n";
        
    }
    
}