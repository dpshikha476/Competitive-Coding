 bool dfs(int node,vector<int> &m, vector<int> &vis, vector<int> adj[])
    {
        vis[node]=1;
        m[node]=1;
        
        for(auto it:adj[node])
        {
            if(vis[it]==0)
            {
                if(dfs(it,m,vis,adj))
                return true;
            }
            else if(m[it]==1)
                return true;
        }
        
        m[node]=0;
        return false;
    }
    
	bool isPossible(int n, vector<pair<int, int> >& p) 
	{
	    vector<int> adj[n];
	    vector<int> vis(n,0);
	    vector<int> m(n,0);
	    
	    for(auto i:p)
	    {
	        adj[i.first].push_back(i.second);
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        if(vis[i]==0)
	        {
	            if(dfs(i,m,vis,adj))
	            return false;
	        }
	    }
	    
	    return true;
	    
	}