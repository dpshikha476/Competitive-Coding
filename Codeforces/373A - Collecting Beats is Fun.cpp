#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int k,d=0,i,j,y,l,b[10]={0};
   char h[4][5];
   cin>>k;
   
   for(i=0;i<4;i++)
   {
       for(j=0;j<4;j++)
       {
           cin>>h[i][j];
            if(h[i][j] == '.')
            continue;
            else
            b[h[i][j]-'0']++;
       }
       for(l=1;l<10;l++)
       {
           if(b[l]>2*k)
           {         
               d=1;
               cout<<"NO";
               break;
           }
       }
       if(d==1)
       break;
   }
   if(d==0)
   cout<<"YES";
}