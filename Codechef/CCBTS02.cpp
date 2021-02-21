#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int main() 
{
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int n,i,c=0,d=0;
	    cin>>n;
	    string s[n];
	    for(i=0;i<n;i++)
	    cin>>s[i];
	    for(i=0;i<n;i++)
	    {
	        if(s[i]=="start" || s[i]=="restart")
	        c=1;
	        else if(s[i]=="stop")
	        {
	            if(c==1)
	            c=0;
	            else
	            {
	                cout<<404<<"\n";
	                d=1;
	                break;
	            }
	        }
	    }
	    if(d==0)
	    cout<<200<<"\n";
	    
	}
	return 0;
}