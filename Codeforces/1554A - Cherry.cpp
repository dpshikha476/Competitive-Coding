#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef long long int lli;

int main()
{
   lli t;
   cin>>t;
   while(t--)
   {
       lli n,i,m=INT_MIN;
       cin>>n;
       lli a[n];
       for(i=0;i<n;i++)
       cin>>a[i];
       
       if(n==2)
       cout<<a[0]*a[1]<<"\n";
       else 
       {
           for(i=1;i<n-1;i++)
                m=max(m,max((a[i]*a[i-1]),(a[i]*a[i+1])));
            
           cout<<m<<"\n";
           
       }
       
   }
   
   return 0;
   
}


