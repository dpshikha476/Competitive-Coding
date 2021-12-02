    int maxSquare(int n, int m, vector<vector<int>> a)
    {
        int i,j,ans=0;
        
        for(i=0;i<n;i++)
        {
            if(a[i][0]==1)
            ans=1;
        }
        
        for(i=0;i<m;i++)
        {
            if(a[0][i]==1)
            ans=1;
        }
        
        for(i=1;i<n;i++)
        {
            for(j=1;j<m;j++)
            {
                if(a[i][j]==0)
                continue;
                else
                {
                    a[i][j]=min(a[i-1][j-1],min(a[i-1][j],a[i][j-1]))+1;
                    ans=max(ans,a[i][j]);
                }
                
            }
        }

        return ans;
        
    }