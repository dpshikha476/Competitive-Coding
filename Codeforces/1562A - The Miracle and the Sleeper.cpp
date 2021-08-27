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
       lli l,r;
       cin>>l>>r;
       
       if(l*2>r)
       cout<<r-l<<"\n";
       else
       cout<<(r-1)/2<<"\n";
       
   }
   return 0;
   
}

