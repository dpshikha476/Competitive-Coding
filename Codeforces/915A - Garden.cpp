#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,m=0,i;
    cin>>n>>k;
    long long int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
       { 
	  m=a[i];
       	  break;
       }
        else if(k%a[i]==0)
        {
            if(m<a[i])
            m=a[i];
        }
    }
    cout<<k/m;
}