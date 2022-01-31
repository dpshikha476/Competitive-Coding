void dfs(int node,int &s, int &c,vector<int> &vis, vector<int> adj[])
    {
        vis[node]=1;
        c++;
        
        for(auto it:adj[node])
        {
            s++;
            if(vis[it]==0)
            {
                dfs(it,s,c,vis,adj);
            }
        }
    }
    
    int makeConnected(int n, vector<vector<int>>& a) 
    {
        vector<int> vis(n,0);
        vector<int> adj[n];
        int i,j,c=0,s,ee=0,x=0;
        
        for(i=0;i<a.size();i++)
        {
            adj[a[i][0]].push_back(a[i][1]);
            adj[a[i][1]].push_back(a[i][0]);
        }
        
        for(i=0;i<n;i++)
        {
            s=0;
            c=0;
            if(vis[i]==0)
            {
                dfs(i,s,c,vis,adj);
                
                if(s>0)
                ee+=s/2 -(c-1);
                x++;
            }
        }
        
        return (ee>=x-1)?x-1:-1;
        
        return -1;
    }