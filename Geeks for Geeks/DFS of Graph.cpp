void dfs(int n,vector<int> adj[], vector<int> &vis, vector<int> &ans)
    {
        vis[n]=1;
        ans.push_back(n);
        
        for(auto it: adj[n])
        {
            if(vis[it]==0)
            dfs(it,adj,vis,ans);
        }
    }
    
    vector<int> dfsOfGraph(int v, vector<int> adj[]) 
    {
        vector<int> vis(v,0);
        vector<int> ans;
        
        for(int i=0;i<v;i++)
        {
            if(vis[i]==0)
            {
                dfs(i,adj,vis,ans);
            }
        }
        
        return ans;
    }