#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
   string s,r,a,b;
   cin>>s>>r;
   long long int n,i;
   cin>>n;
   cout<<s<<" "<<r<<"\n";
   for(i=0;i<n;i++)
   {
      cin>>a>>b;
      if(a==s)
      {
        s=b;
        cout<<b<<" "<<r<<"\n";
      }
      else if(a==r)
      {
        r=b;
        cout<<s<<" "<<b<<"\n"; 
      }
   }
}