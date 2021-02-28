
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int n,i,m;
	    cin>>n;
	    long long int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    
	    sort(a,a+n);
	    
	     m = max((a[n-1]*a[n-2] + (a[n-1]-a[n-2])) , (a[0]*a[1] + (a[1]-a[0])));
	    
	    cout<<m<<"\n";
	    
	    
	}
	return 0;
}
