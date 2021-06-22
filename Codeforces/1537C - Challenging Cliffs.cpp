#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;


int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli n,i,d=INT_MAX,x,j;
        cin>>n;
        lli a[n],b[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        
        sort(a,a+n);
        for(i=0;i<n-1;i++)
        {
            if(a[i+1]-a[i]<d)
            {
                d=a[i+1]-a[i];
                x=i;
            }
        }
        
        b[0]=a[x];
        b[n-1]=a[x+1];
        
        for(i=x+2,j=1;i<n;i++,j++)
        {
            b[j]=a[i];
        }
        for(i=0;i<x;i++,j++)
        {
            b[j]=a[i];
        }
        
        for(i=0;i<n;i++)
        cout<<b[i]<<" ";
        cout<<"\n";
        
    }
}
