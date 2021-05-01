#include<bits/stdc++.h>
#include<string.h>
#include<vector>
using namespace std;
typedef long long int lli;
  

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    lli t;
    cin>>t;
    while(t--)
    {
       lli n,m,k,x,y,ans=0;
       cin>>n>>m>>k;
       x=n-1;
       y=m-1;
       
       if(n<=m)
       {
           ans+=1*y;
           ans+=m*x;
       }
       else 
       {
           ans+=1*x;
           ans+=n*y;
       }
       
       if(ans==k)
       cout<<"YES"<<"\n";
       else
       cout<<"NO"<<"\n";
    }
}


