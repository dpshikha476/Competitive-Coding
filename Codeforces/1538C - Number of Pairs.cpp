#include <bits/stdc++.h>
using namespace std; 
typedef long long int lli;

lli solve(vector<lli> v, lli n, lli l, lli r)
{
   lli i,c=0;
   
   sort(v.begin(),v.end());

    for (int i = 0; i < n; i++) 
    {
        c += upper_bound(v.begin(), v.end(), r - v[i]) - v.begin();
        c -= lower_bound(v.begin(), v.end(), l - v[i]) - v.begin();
        if (l <= 2 * v[i] && 2 * v[i] <= r) 
        {
            c--;
        }
    }

   return c/2;
   
}
 
int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli n,l,r;
        cin>>n>>l>>r;
        vector<lli> a;
        for(lli i=0;i<n;i++)
        {
            lli d;
            cin>>d;
            a.push_back(d);
        }
        
        cout<<solve(a,n,l,r)<<"\n";
    }
}
