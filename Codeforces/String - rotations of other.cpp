#include <stdio.h>
#include <bits/stdc++.h>
#include<string.h>
using namespace std;
typedef long long int lli;

bool solve(string s, string t)
{
    string str= s+s;
	lli i,l=t.length(),n=str.length();
	for(i=0;i<n-l+1;i++)
	{
	    if(str.substr(i,l)==t)
	    return true;
	}
	
	return false;
}
int main() 
{
	string s,t;
	cin>>s>>t;
	
	if(solve(s,t))
	cout<<"YES"<<"\n";
	else
	cout<<"NO"<<"\n";
	
	return 0;
}