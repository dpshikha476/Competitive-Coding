#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
   string s;
   cin>>s;
   long long int i,l,c=0,m=0,j=0;
   l=s.length();
   if(l==1)
   {
       if(s[0]=='A' || s[0]=='E' || s[0]=='I' || s[0]=='O' || s[0]=='U' || s[0]=='Y')
       m=1;
       else
       m=2;
   }
   else
   {
   for(i=0;i<l;i++)
   {
       if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y')
       {
           c= i+1-j;
           j=i+1;
           m= max(c,m);
       }
   }
        m= max(m, l+1-j);
   }
   cout<<m;
   
}