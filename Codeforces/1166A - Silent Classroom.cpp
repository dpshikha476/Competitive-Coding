#include<bits/stdc++.h>
#include<unordered_set>
#include<string.h>
#include<vector>
using namespace std;
typedef long long int lli;


lli facto(lli n)
{
    if(n==1)
    return 0;
    if(n==2)
    return 1;
    
    return (n*(n-1))/2;
    
}
 
int main()
{
    lli n,b[26]={0},i,c=0,d,e;
    cin>>n;
    for(i=0;i<n;i++)
    {
        string s;
        cin>>s;
        b[s[0]-'a']++;
    }
    
    for(i=0;i<26;i++)
    {
        if(b[i]>2)
        {
            d=b[i]/2;
            e=b[i]-d;
            
            c=c+ facto(d)+facto(e);
        }
    }
    
    cout<<c;
    
    
}
