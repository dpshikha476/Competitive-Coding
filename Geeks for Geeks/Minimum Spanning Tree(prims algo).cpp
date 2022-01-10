int spanningTree(int v, vector<vector<int>> adj[])
    {
        int key[v],mst[v],cost=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push({0,0});
        
        for (int i=0; i<v; i++)
        {
            key[i]=INT_MAX;
            mst[i]=0;
        }
        
        key[0]=0;
    
        while(!pq.empty())
        {
            int u=pq.top().second;
            pq.pop();
            mst[u]=1;
            
            for(auto it:adj[u])
            {
                int node=it[0];
                int wt=it[1];
                if(mst[node]==0 && wt < key[node])
                {
                    key[node]=wt;
                    pq.push({key[node],node});
                }
                
            }
            
        }
        
        for (int i=0;i<v;i++)
            cost+= key[i];
        
        return cost;
    }