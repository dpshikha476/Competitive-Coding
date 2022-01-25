#include <bits/stdc++.h>
using namespace std;

void dfs(long long int node,vector<long long int> &vis, vector<long long int> adj[],long long int &c)
{
    vis[node]=1;
    c++;
    for(auto it:adj[node])
    {
        if(vis[it]==0)
        {
            dfs(it,vis,adj,c);
        }
    }
}

int main()
{
    long long int n,p;
    cin>>n>>p;
    vector<long long int> adj[n];

    for(long long int i=0;i<p;i++)
    {
        long long int x,y;
        cin>>x;
        cin>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    vector<long long int> vis(n,0);
    vector<long long int> v;

    for(long long int i=0;i<n;i++)
    {
        if(vis[i]==0)
        {
            long long int c=0;
            dfs(i,vis,adj,c);
            v.push_back(c);
        }
    }
    
    long long int ans=((n-1)*n)/2;
    for(long long int i=0;i<v.size();i++)
    {
        long long int val=((v[i]-1)*v[i])/2;
        ans=ans-val;
    }
    
    cout<<ans<<"\n";
    
    return 0;
}
