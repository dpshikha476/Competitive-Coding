#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,i,m=0;
        cin>>n;
        long long int a[n],b[n+1]={0};
        for(i=0;i<n;i++)
       { cin>>a[i];
       b[a[i]]++;
       }
       for(i=0;i<=n;i++)
       {
           m=max(m,b[i]);
       }
        cout<<m<<"\n";
    }
}