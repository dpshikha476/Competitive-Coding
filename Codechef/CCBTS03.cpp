#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int n,k,i,m=INT_MAX,d;
	    cin>>n>>k;
	    long long int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    sort(a,a+n);
	    if(k==1)
	        cout<<0<<"\n";
	    else
	   {
	       for(i=0;i<=n-k;i++)
	       {
	           d= a[i+k-1]-a[i];
	           if(d<m)
	           m=d;
	       }
	       cout<<m<<"\n";
	   }
	    
	}
	return 0;
}
