vector<int> bfsOfGraph(int v, vector<int> adj[]) 
    {
        vector<int> vis(v,0);
        vector<int> ans;
            if(vis[0]==0)
            {
                vis[0]=1;
                queue<int> q;
                q.push(0);
                
                while(!q.empty())
                {
                    int n=q.front();
                    q.pop();
                    ans.push_back(n);
                    for(auto it: adj[n])
                    {
                        if(vis[it]==0)
                        {
                            vis[it]=1;
                            q.push(it);
                        }
                    }
                }
                
            }
        
        return ans;
    }