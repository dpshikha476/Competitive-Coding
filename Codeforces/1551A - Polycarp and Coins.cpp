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
       lli n,x,y,z,s,d;
       cin>>n;
       
       x=n/3;
       y=x; 
       
       if((n-3*x)%3==2 && (x*2+y)<n)
       {
           if(abs((y+2)-x) < abs(y-(x+1)))
           y=y+2;
           else
           x++;
       }
       else if((n-3*x)%3==1 && (x*2+y)<n)
       y++;
       
       cout<<y<<" "<<x<<"\n";
       
       
   }
   
   return 0;
   
}

