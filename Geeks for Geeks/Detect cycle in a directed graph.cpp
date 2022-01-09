bool dfs(int node, vector<int> &vis, vector<int> &dfsvis, vector<int> adj[])
    {
        vis[node]=1;
        dfsvis[node]=1;
        
        for(auto it:adj[node])
        {
            if(vis[it]==0)
            {
                if(dfs(it,vis,dfsvis,adj))
                return true;
            }
            else if(dfsvis[it]==1)
            return true;
        }
        
        dfsvis[node]=0;
        return false;
    }
    
    bool isCyclic(int v, vector<int> adj[]) 
    {
        vector<int> vis(v,0);
        vector<int> dfsvis(v,0);
        
        for(int i=0;i<v;i++)
        {
            if(vis[i]==0)
            {
                if(dfs(i,vis,dfsvis,adj))
                return true;
            }
        }
        
        return false;
        
    }