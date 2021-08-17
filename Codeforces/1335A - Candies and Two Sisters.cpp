#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
 
int main()
{
   lli t;
   cin>>t;
   while(t--)
   {
       lli n,ans=0;
       cin>>n;
       
       if(n%2==0)
       ans=n/2 -1;
       else
       ans=n/2;
       
       cout<<ans<<"\n";
   }
 
}
