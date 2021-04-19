#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long int n,i,m=0;
    cin>>n;
    long long int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        a[i]--;
    }
    
    long long int cnt = 0, pos = 0;
	while(pos < n) {
		cnt++;
	    long long int mx = pos;
		while(pos < n && pos <= mx) {
			mx = max(mx, a[pos]);
			pos++;
		}
	}
	cout << cnt << endl;
}