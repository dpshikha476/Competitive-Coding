
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
 
int main()
{
   lli t;
   cin>>t;
   while(t--)
   {
       lli n,i;
       cin>>n;
       lli a[n];
       
       for(i=0;i<n;i++)
       cin>>a[i];
       
       sort(a,a+n);
       
       double s=0.0;
       
       for(i=0;i<n-1;i++)
       s+=a[i];
       
       double ans=(double)a[n-1] + (double)s/(double)(n-1);
       
       
       cout<<std::fixed << std::setprecision(9) <<ans<<"\n";
   }
 
}
