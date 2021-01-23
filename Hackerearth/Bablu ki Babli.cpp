#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define M 1000000007
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,q;
    cin>>n>>q;
    ll A[n];
    for(int i = 0; i<n; i++)
    cin>>A[i];
    for(int i = 0; i<n-1; i++)
    A[i+1]+=A[i];
    while(q--)
    {
        ll x;cin>>x;
        ll l = 0,h = n-1,ans = -1;
        while(l<=h)
        {
            ll mid = l+(h-l)/2;
            if(A[mid]>=x){
                ans = mid+1;
                h = mid-1;
            }
            else if(A[mid]==x){
                ans = mid+1;
                break;
            }
            else l = mid+1;
        }
        cout<<ans<<endl;
    }
    return 0;
}