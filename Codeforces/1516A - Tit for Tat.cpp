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
        lli n,k,i;
        cin>>n>>k;
        lli a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        
       for(i=0;i<n-1;i++)
       {
           if(k>0)
           {
               if(a[i]>k)
               {
                   a[i]-=k;
                   a[n-1]=a[n-1]+k;
                   k=0;
               }
               else 
               {
                   a[n-1]=a[n-1]+a[i];
                   k=k-a[i];
                   a[i]=0;
                   
               }
               
           }
           else
           break;
       }
        
        for(i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<"\n";
    }
}