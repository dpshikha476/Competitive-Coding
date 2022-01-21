void dfs(int i, int j,int n, int m,vector<vector<char>> &grid,int vis[][501])
    {
        if(i<0 || j<0 || i>=n || j>=m)
        return;
        if(grid[i][j]=='0')
        return;
        
        if(vis[i][j]==0)
        {   
            vis[i][j]=1;
            
            dfs(i+1,j,n,m,grid,vis);
            dfs(i,j+1,n,m,grid,vis);
            dfs(i-1,j,n,m,grid,vis);
            dfs(i,j-1,n,m,grid,vis);
            dfs(i+1,j+1,n,m,grid,vis);
            dfs(i-1,j+1,n,m,grid,vis);
            dfs(i-1,j-1,n,m,grid,vis);
            dfs(i+1,j-1,n,m,grid,vis);
        }
        
    }
    
    int numIslands(vector<vector<char>>& grid) 
    {
        int c=0;
        int n=grid.size(),m=grid[0].size();
        int vis[501][501];

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                vis[i][j]=0;
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vis[i][j]==0 && grid[i][j]=='1')
                {
                    dfs(i,j,n,m,grid,vis);
                    c++;
                }
            }
        }
        
        return c;
    }