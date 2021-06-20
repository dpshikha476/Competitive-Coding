#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;



int main()
{
    lli n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    vector<lli> v;
    lli i;
    v.push_back(s[0]-'a'+1);
    for(i=1;i<n;i++)
    {
        v.push_back(s[i]-'a'+1+v[i-1]);
    }
    while(q--)
    {
        lli l,r;
        cin>>l>>r;
        if(l-1==0)
        cout<<v[r-1]<<"\n";
        else
        cout<<v[r-1]-v[l-2]<<"\n";
    }
    
}
