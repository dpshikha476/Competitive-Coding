bool check(int node, vector<int>adj[], vector<int> &col)
    {
        if(col[node]==-1)
        col[node]=1;
        
        for(auto it:adj[node])
        {
            if(col[it]==-1)
            {
                col[it]=1-col[node];
                if(!check(it,adj,col))
                    return false;
            }
            else if(col[it]==col[node])
                return false;
        }
        
        return true;
    }

	bool isBipartite(int v, vector<int>adj[])
	{
	    vector<int> col(v,-1);
	    
	    for(int i=0;i<v;i++)
	    {
	        if(col[i]==-1)
	        {
	            if(!check(i,adj,col))
	            return false;
	        }
	    }
	    
	    return true;
	}
