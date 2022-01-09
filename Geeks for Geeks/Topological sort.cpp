	vector<int> topoSort(int v, vector<int> adj[]) 
	{
	    vector<int> indegree(v,0);
	    vector<int> topo;
	    queue<int> q;
	    
	    for(int i=0;i<v;i++)
	    {
	        for(auto it:adj[i])
	        indegree[it]++;
	    }
	    
	    for(int i=0;i<v;i++)
	    {
	        if(indegree[i]==0)
	            q.push(i);
	    }
	    
	    while(!q.empty())
	    {
	        int node=q.front();
	        q.pop();
	        topo.push_back(node);
	        
	        for(auto it: adj[node])
	        {
	            indegree[it]--;
	            if(indegree[it]==0)
	                q.push(it);
	        }
	    }
	    
	    return topo;
	    
	}