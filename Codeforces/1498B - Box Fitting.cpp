#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
 
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,w,i,s,h=1,g;
        cin>>n>>w;
        s=w;
        lli a[n];
        multiset<lli> v;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            v.insert(a[i]);
        }
        
       
       while(!v.empty())
       {
           auto it= v.upper_bound(s);
           if(it!=v.begin())
           {
               it--;
               g=*it;
               s-=g;
               v.erase(it);
           }
           else 
           {
               s=w;
               h++;
           }
       }
        cout<<h<<"\n";
    }
}
