
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    int count = 0;
    map<ll,ll>map;

    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        ll A[3] = {a,b,c};
        sort(A,A+3);
        ll x = A[0]*100+A[1]*10+A[2];
        map[x]++;
    }
    for(auto it:map)
    {
        if(it.second==1)count++;
    }
    cout<<count<<endl;
    return 0;
}