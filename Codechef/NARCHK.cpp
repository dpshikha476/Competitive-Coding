#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int main() {
	long long int n,x,l,sum=0,d;
	cin>>n;
	string s= to_string(n);
	l=s.length();
	x=n;
	while(n!=0)
	{
	    d=n%10;
	    sum=sum+ pow(d,l);
	    n=n/10;
	}
	if(sum==x)
	cout<<"Yes"<<"\n";
	else
	cout<<"No"<<"\n";
	return 0;
}