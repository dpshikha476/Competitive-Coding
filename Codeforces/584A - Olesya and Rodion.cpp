
#include <bits/stdc++.h>
 
using namespace std;
typedef long long int lli;
int n,m;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin>>n>>m;
    if(m<10)
	cout<<string(n,m+'0');
    else if(m==10 && n>1)
	cout<<string(n-1,'1')<<0;
    else 
	cout<<-1;
    return 0;
}
