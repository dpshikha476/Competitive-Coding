#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int s,i,j,tot=0,l,c=0;
	    cin>>s;
	    long long int q[s],e[s];
	    for(i=0;i<s;i++)
	    cin>>q[i];
	    for(i=0;i<s;i++)
	    {
	        cin>>e[i];
	        for(j=0;j<e[i];j++)
	        {
	            cin>>l;
	            tot=tot+l-q[i];
	        }
	        tot=tot+q[i];
	    }
	    
	    cout<<tot<<"\n";
	    
	}
	return 0;
}
