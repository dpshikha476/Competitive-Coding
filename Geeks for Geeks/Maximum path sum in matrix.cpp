 int maximumPath(int n, vector<vector<int>> t)
    {
        int i,j,m=INT_MIN;
        
        for(i=1;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(j>0 && j<n-1)
                t[i][j]+=max(t[i-1][j],max(t[i-1][j-1],t[i-1][j+1]));
                
                else if(j>0)
                t[i][j]+=max(t[i-1][j],t[i-1][j-1]);
                
                else if(j<n-1)
                t[i][j]+=max(t[i-1][j],t[i-1][j+1]);
            }
        }
        
        for(i=0;i<n;i++)
        m=max(m,t[n-1][i]);
        
        return m;
        
    }