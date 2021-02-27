#include <iostream>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int n,k;
	    cin>>n>>k;
	    if(k==00)
	    cout<<n<<"\n";
	    else if(n==0)
	    cout<<0<<"\n";
	    else
	    cout<<n%k<<"\n";
	}
	return 0;
}
