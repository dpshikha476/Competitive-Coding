#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int a[n],i,m=0,s=INT_MAX,j;
    for(i=0;i<n;i++)
    cin>>a[i];
    
    for(i=1;i<n-1;i++)
    {
        m=0;
        for(j=0;j<n-1;j++)
        {
          if(j==i)
          continue;
          else if(j+1==i )
          {
              if(a[j+2]-a[j]>m)
              m=a[j+2]-a[j];
          }
          else
          {
              if(a[j+1]-a[j]>m)
              m=a[j+1]-a[j];
          }
        }
        if(m<s)
        s=m;
        
    }
    cout<<s<<"\n";
}