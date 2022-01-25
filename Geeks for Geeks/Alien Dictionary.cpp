void dfs(int node,string &ans,vector<int> &vis ,vector<vector<int>> &adj)
    {
        vis[node]=1;
        
        for(auto it:adj[node])
        {
            if(vis[it]==0)
            {
                dfs(it,ans,vis,adj);
            }
        }
        
        ans=(char('a'+node)) +ans;
    }
    
    string findOrder(string dict[], int n, int v) 
    {
        vector<vector<int>> adj(v);
        vector<int> vis(v,0);
        
        for(int i=0;i<n-1;i++)
        {
            string a=dict[i];
            string b=dict[i+1];
            
            int len=min(a.length(),b.length());
            
            for(int k=0;k<len;k++)
            {
                if(a[k]!=b[k])
                {
                    adj[a[k]-'a'].push_back(b[k]-'a');
                    break;
                }
            }
        }
        
        string ans="";
        
        for(int i=0;i<v;i++)
        {
            if(vis[i]==0)
            {
                dfs(i,ans,vis,adj);
            }
        }
        
        return ans;
        
    }