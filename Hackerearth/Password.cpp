#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    string a,b;
    cin>>a>>b;
	long long int sum=0,power=1,mod= 1000000007,i;
      for( i=a.length()-1;i>=0;i--)
	{
		if(a[i]=='1')
		sum=(sum+power)%mod;
		power=(power*2)%mod;
		
	}
	power=1;
	for(i=b.length()-1;i>=0;i--)
	{
		if(b[i]=='1')
		sum=(sum+power)%mod;
		power=(power*2)%mod;
	} 

    cout<< sum;

}