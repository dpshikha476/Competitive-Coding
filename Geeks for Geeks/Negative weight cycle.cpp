int isNegativeWeightCycle(int n, vector<vector<int>>edges)
	{
	    int dist[n]={INT_MAX};
	    dist[0]=0;
	    
	    for(int i=0;i<n-1;i++)
	    {
	        for(auto it:edges)
	        {
	            int u=it[0];
	            int v=it[1];
	            int wt=it[2];
	            
	            if(dist[v]>dist[u]+wt)
	               dist[v]=dist[u]+wt; 
	        }
	    }
	    
	    for(auto it:edges)
	    {
	            int u=it[0];
	            int v=it[1];
	            int wt=it[2];
	            
	            if(dist[v]>dist[u]+wt)
	                   return true;
	    }
	    
	    return false;
	}