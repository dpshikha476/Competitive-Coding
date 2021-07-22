#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,i,x;
   cin>>n;
   
   vector<int> v;
   
   for(i=0;i<n;i++)
   {
       x=3*n+i;
       v.push_back(x);
   }
   
   for(i=0;i<v.size();i++)
   cout<<v[i]<<" ";
   
   return 0;
   
}
