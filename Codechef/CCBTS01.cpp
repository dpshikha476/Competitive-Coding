#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int main() 
{
	long long int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    long long int a=0,b=0,c=0,i;
	    for(i=0;i<3;i++)
	    {
	        if(s[i]=='P')
	        a++;
	        else if(s[i]=='C')
	        b++;
	        else if(s[i]=='M')
	        c++;
	    }
	    if(a==1 && b==1 && c==1)
	    cout<<"YES"<<"\n";
	    else
	    cout<<"NO"<<"\n";
	}
	return 0;
}
