	void topo(int i,stack<int> &s,vector<int> &vis,vector<int> adj[] )
	{
	    vis[i]=1;
	    
	    for(auto it:adj[i])
	    {
	        if(vis[it]==0)
	        topo(it,s,vis,adj);
	    }
	    
	    s.push(i);
	}
	
	void revdfs(int node,vector<int> &vis,vector<int> trans[])
	{
	    vis[node]=1;
	    
	    for(auto it:trans[node])
	    {
	        if(vis[it]==0)
	        revdfs(it,vis,trans);
	    }
	}
	
    int kosaraju(int v, vector<int> adj[])
    {
        stack<int> s;
        vector<int> vis(v,0);
        int i,c=0;
        
        for(i=0;i<v;i++)
        {
            if(vis[i]==0)
            {
                topo(i,s,vis,adj);
            }
        }
            
        vector<int> trans[v];
            
        for(i=0;i<v;i++)
        {
            vis[i]=0;
            for(auto it:adj[i])
    	    {
    	        trans[it].push_back(i);
    	    }
        }
        
        while(!s.empty())
        {
            int node=s.top();
            s.pop();
            if(vis[node]==0)
            {
                revdfs(node,vis,trans);
                c++;
            }
        }
        
        return c;
    }