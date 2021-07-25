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
       lli r1,w1,c1,r2,w2,c2;
       cin>>r1>>w1>>c1>>r2>>w2>>c2;
       lli a=0,b=0;
       
       if(r1>r2)
       a++;
       else if(r2>r1)
       b++;
       if(w1>w2)
       a++;
       else if(w2>w1)
       b++;
       if(c1>c2)
       a++;
       else if(c2>c1)
       b++;
       
       if(a>b)
       cout<<"A"<<"\n";
       else
       cout<<"B"<<"\n"; 
       
   }
   
   return 0;
   
}
