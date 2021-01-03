#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define forn(i,n) for(i=0;i<n;i++)
 
void solve()
{
    lli n,i,j;
    cin>>n;
    lli a[n][n]={0};
     for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        a[i][j]=0;
        
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j || i+j == n-1)
            a[i][j]=1;
        }
    }
    if(n%2!=0)
    {
        a[n/2 -1][n/2]=1;
        a[n/2][(n/2) +1]=1;
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
 
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin>>t;
    while(t--)
    {
    	solve();
    }
}