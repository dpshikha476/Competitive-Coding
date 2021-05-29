#include<bits/stdc++.h>
#include<unordered_set>
#include<string.h>
#include<vector>
using namespace std;
typedef long long int lli;

bool check(lli n)
{
    if(n>1099)
    return true;
    
    while(true)
    {
        if(n%11==0)
        return true;
        
        n-=111;
        
        if(n<0)
        return false;
    }
    
    return false;
}
int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli n;
        cin>>n;
        
        if(check(n))
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
    }
}
