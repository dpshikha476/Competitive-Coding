vector <int> dijkstra(int v, vector<vector<int>> adj[], int s)
    {
        vector<int> dist(v+1,INT_MAX);
        dist[s]=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> pq;
        pq.push({0,s});
        
        while(!pq.empty())
        {
            int node=pq.top().second;
            int d=pq.top().first;
            pq.pop();
            
            for(auto it:adj[node])
            {
                int next=it[0];
                int ndis=it[1];
                if(dist[next]> d + ndis)
                {
                    dist[next]=d + ndis;
                    pq.push({dist[next],next});
                }
            }
        }
        
        return dist;
    }