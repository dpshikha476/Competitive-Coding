#include<bits/stdc++.h>
#include<string.h>
#include<vector>
using namespace std;
typedef long long int lli;
  

int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli n,x,s=0,i;
        cin>>n>>x;
        lli a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        if(s==x || (n==1 && a[0]==x))
        cout<<"NO"<<"\n";
        else
        {
            s=0;
            for(i=0;i<n;i++)
            {
                s+=a[i];
                if(s==x)
                {
                    if(i<n-1)
                    swap(a[i],a[i+1]);
                    else
                    swap(a[i],a[i-1]);
                }
            }
            
            cout<<"YES"<<"\n";
            for(i=0;i<n;i++)
            cout<<a[i]<<" ";
            cout<<"\n";
        }
    }
    
}















