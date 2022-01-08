bool isCycle(int v, vector<int> adj[]) 
    {
        int vis[v]={0};
        
        for(int i=0;i<v;i++)
        {
            if(vis[i]==0)
            {
                queue<pair<int,int>> q;
                vis[i]=1;
                q.push({i,-1});
                while(!q.empty())
                {
                    int node=q.front().first;
                    int par=q.front().second;
                    q.pop();
                    for(auto it:adj[node])
                    {
                        if(vis[it]==0)
                        {
                            vis[it]=1;
                            q.push({it,node});
                        }
                        else if(it!=par)
                        return true;
                    }
                }
            }
        }
        
        return false;
    }