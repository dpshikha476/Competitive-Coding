#include<bits/stdc++.h>
#include<string.h>
#include<vector>
using namespace std;
typedef long long int lli;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    lli t;
    cin>>t;
    while(t--)
    {
       lli n,i,j,k;
       cin>>n;
       lli a[n];
       for(i=0;i<n;i++)
       cin>>a[i];
       vector<lli> v;
       
       i=0;
       j=n-1;
       k=0;
       while(i<=j)
       {
           if(k%2==0)
           {
               v.push_back(a[i]);
               i++;
           }
           else 
           {
               v.push_back(a[j]);
               j--;
           }
           k++;
       }
       
       for(i=0;i<v.size();i++)
       cout<<v[i]<<" ";
       cout<<"\n";
    }
}
