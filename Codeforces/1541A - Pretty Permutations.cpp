#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;


int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli n,i;
        cin>>n;
        lli a[n];
        if(n%2==0)
        {
            for(i=0;i<n;i+=2)
            {
                a[i]=i+2;
                a[i+1]=i+1;
            }
        }
        else
        {
            for(i=0;i<n-1;i+=2)
            {
                a[i]=i+2;
                a[i+1]=i+1;
            }
            
            a[n-1]=a[n-2];
            a[n-2]=n;
        }
        
        
        for(i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<"\n";
        
    }
    
    return 0;
}
