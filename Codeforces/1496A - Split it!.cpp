#include<bits/stdc++.h>
#include<string.h>
using namespace std;
 
bool solve(long long int n, long long int k, string s)
{
    long long int i,j;
    
    if(k==0)
    return true;
    
    if(n<=2*k)
    return false;
    
    for(i=0,j=n-i-1;i<k;i++,j--)
    {
        if(s[i]!=s[j])
        return false;
    }
    
    return true;
}
 
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        if(solve(n,k,s))
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
        
    }
}