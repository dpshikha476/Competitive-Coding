#include<bits/stdc++.h>
#include<unordered_set>
#include<string.h>
#include<vector>
using namespace std;
typedef long long int lli;


int main()
{
    lli n,k,s,i,x;
    cin>>n>>k;
    
    s= 2*k+2*n;
    for(i=0;i<=n;i++)
    {
        if(i*i+3*i == s)
        {
            x=i;
            break;
        }
    }
    
    cout<<n-x<<"\n";
}
