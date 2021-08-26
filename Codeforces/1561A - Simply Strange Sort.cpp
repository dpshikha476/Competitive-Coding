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
       lli n,i,c=0;
       cin>>n;
       vector<lli> a(n);
       for(i=0;i<n;i++)
       cin>>a[i];
       
        while (!is_sorted(a.begin(), a.end()))
       {
           for(i=c%2;i+1<n;i+=2)
           {
               if(a[i]>a[i+1])
               {
                   swap(a[i],a[i+1]);
               }
           }
           
           c++;
       }
       
       cout<<c<<"\n";
   }
   
   return 0;
   
}


