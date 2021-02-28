#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int c,d,a[3],b[3],sum1=0,sum2=0,i,s1=0,s2=0;
	    cin>>d>>c;
	    for(i=0;i<3;i++)
	    {
	        cin>>a[i];
	        s1=s1+a[i];
	    }
	    for(i=0;i<3;i++)
	    {
	        cin>>b[i];
	        s2=s2+b[i];
	    }
	    if(s1>=150)
	    sum1=sum1+s1+c;
	    else
	    sum1=sum1+s1+c+d;
	    if(s2>=150)
	    sum1=sum1+s2;
	    else
	    sum1=sum1+s2+d;
	    
	    sum2=sum2+s1+s2+ 2*d;

	    
	    if(sum2>sum1)
	    cout<<"YES"<<"\n";
	    else
	    cout<<"NO"<<"\n";
	    
	    
	}
	return 0;
}
