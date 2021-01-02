#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define forn(i,n) for(i=0;i<n;i++)
 
void solve()
{
    lli n,k;
    cin>>n>>k;
 
        if(n < k)
            cout << k - n << endl;
 
        else if(n % 2 == k % 2)
            cout << 0 << endl;
 
        else
            cout << 1 << endl;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin>>t;
    while(t--)
    {
    	solve();
    }
}