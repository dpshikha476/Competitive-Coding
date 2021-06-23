
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

bool solve(lli a[], lli n)
{
    lli i,j;
    bool flag=false;
    
    for(i=0;i<n-2;i++)
    {
        for(j=i+2;j<n;j++)
        {
           if(a[i]==a[j])
           flag=true; 
        }
    }
    
    return flag;
}

int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli n,i;
        cin>>n;
        lli a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        
        if(solve(a,n))
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
        
    }
}
