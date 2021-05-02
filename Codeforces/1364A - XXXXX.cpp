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
       lli n,x,i,sum=0,l=-1,r=-1;
       cin>>n>>x;
       lli a[n];
       for(i=0;i<n;i++)
       cin>>a[i];
       
       for(i=0;i<n;i++)
       {
           if(a[i]%x)
           {
               if(l==-1)
               l=i;
               
               r=i;
           }
           sum+=a[i];
       }
       
       if(sum%x)
       cout<<n<<"\n";
       else if(l==-1)
       cout<<-1<<"\n";
       else
       cout<<n-min(l+1,n-r)<<"\n";
       
    }
}
