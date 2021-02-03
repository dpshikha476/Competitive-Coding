#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
   long long int n,k,a,i,s=0,c=0,h;
   cin>>n>>k;
   vector<int> v;
   for(i=0;i<n;i++)
   {
       cin>>a;
        v.push_back(a);
        s=s+a;
   }
   for(i=0;i<v.size();i++)
   {
       
       double b=(double)s/(double)(n+i);
       h=round(b);
       if(h<k)
       {
           v.push_back(k);
            s=s+k;
            c++;
       }
       else
       break;
       
   }
    cout<<c;
}