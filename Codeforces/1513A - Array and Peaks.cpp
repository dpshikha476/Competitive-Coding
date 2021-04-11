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
       lli n,k,i,c=0;
       cin>>n>>k;
       lli a[n];
       for(i=0;i<n;i++)
       a[i]=i+1;
        
       for(i=1;i<n-1;i=i+2)
       {
           if(c==k)
           break;
           swap(a[i],a[i+1]);
           c++;   
          
       }
       if(c==k)
       {
            for(i=0;i<n;i++)
            cout<<a[i]<<" ";
            cout<<"\n";
       }
       else {
       cout<<-1<<"\n";
       }
    }
    
}
