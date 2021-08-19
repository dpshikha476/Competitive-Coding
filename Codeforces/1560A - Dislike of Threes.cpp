#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
 
int main()
{
   lli t;
   cin>>t;
   while(t--)
   {
       lli k,i=1,ans=0;
       cin>>k;
       
       while(true)
       {
           if(i%3==0 || i%10==3)
           {
               i++;
               continue;
           }
           else
           {
               i++;
               ans++;
           }
           
           if(ans==k)
           break;
       }
       
       cout<<i-1<<"\n";
   }
 
}
