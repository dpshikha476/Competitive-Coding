vector<string> v;
    
    void dfs(int i, int j, string s, int n, vector<vector<int>> m, vector<vector<int>> &vis)
    {
        if(i<0 || j<0 || i>=n || j>=n)
        return;
        if(m[i][j]==0 || vis[i][j]==1)
        return;
        
        if(i==n-1 && j==n-1)
        {
            v.push_back(s);
            return;
        }
        
        vis[i][j]=1;
        
        dfs(i+1,j,s+'D',n,m,vis);
        dfs(i,j+1,s+'R',n,m,vis);
        dfs(i-1,j,s+'U',n,m,vis);
        dfs(i,j-1,s+'L',n,m,vis);
        
        vis[i][j]=0;
        
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) 
    {
        v.clear();
        vector<vector<int>> vis(n,vector<int>(n,0));
        
        if(m[0][0]==0 || m[n-1][n-1]==0)
        return v;
        
        string s="";
        
        dfs(0,0,s,n,m,vis);
        sort(v.begin(),v.end());
        
        return v;
        
    }