#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
   long long int t;
   cin>>t;
   while(t--)
   {
       long long int p,a,b,c,i,m=0,j,s=LLONG_MAX;
       cin>>p>>a>>b>>c;
       if(p%a==0 || p%b==0 || p%c==0)
       cout<<0<<"\n";
       else
       {
           if(p>a)
           s= min(s,(p/a+1)*a -p);
           else
           s= min(s,a-p);
           if(p>b)
           s= min(s,(p/b+1)*b -p);
           else
           s= min(s,b-p);
           if(p>c)
           s= min(s,(p/c+1)*c -p);
           else
           s= min(s,c-p);
           
           cout<<s<<"\n";     
       }
   }
}