#include<bits/stdc++.h>
#include<unordered_set>
#include<string.h>
#include<vector>
using namespace std;
typedef long long int lli;
  
bool solve(lli n, string s)
{
        lli i;
        
        unordered_set <char>  v;
        v.insert(s[0]);
        
        for(i=1;i<n;i++)
        {
            if (s[i]!=s[i-1] && (v.find(s[i]) == v.end()))
            v.insert(s[i]);
            
            else if( v.find(s[i]) != v.end() && s[i]!=s[i-1])
            return false;
        } 
        
        return true;
        
}
int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli n;
        cin>>n;
        string s;
        cin>>s;
        
        if(solve(n,s))
        cout<<"YES"<<"\n";
        
        else
        cout<<"NO"<<"\n";
    }
    
}