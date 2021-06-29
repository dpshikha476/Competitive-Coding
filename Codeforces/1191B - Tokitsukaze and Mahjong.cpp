#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

lli solve(string a, string b, string c)
{
    lli ans=0;
    
    if(a==b && b==c)
    return ans;
    
    vector<pair<int,char>> x;
    x.push_back({a[0]-'0',a[1]});
    x.push_back({b[0]-'0',b[1]});
    x.push_back({c[0]-'0',c[1]});
    sort(x.begin(),x.end());
    if((x[0].first==x[1].first-1 && x[1].first==x[2].first-1) && (x[0].second==x[1]      .second && x[1].second==x[2].second))
    return ans;
    
    if((x[0].first==x[1].first-1 || x[0].first==x[1].first-2) && x[0].second==x[1]       .second)
    {
        ans=1;
    } 
    else if((x[1].first==x[2].first-1 || x[1].first==x[2].first-2) && x[1].second==x[2]  .second)
    {
        ans=1;
    }
    else if((x[0].first==x[2].first-1 || x[0].first==x[2].first-2) && x[0].second==x[2]  .second)
    {
        ans=1;
    }
    if(a==b || b==c || a==c)
    ans=1;
    
    if(ans!=0)
    return ans; 
    
    ans=2;
    return ans;
    
}

int main()
{
    string a,b,c;
    cin>>a>>b>>c;
    
    cout<<solve(a,b,c)<<"\n";
    return 0;
}
