#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main() 
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli a,x,y;
        cin>>a>>y>>x;
        if(a>=y)
        cout<<x*y<<"\n";
        else
        cout<<a*x+1<<"\n";
    }
	return 0;
}
