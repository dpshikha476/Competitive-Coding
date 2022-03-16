    int minDistance(string w1, string w2) 
    {
        int i,j,n=w1.length(),m=w2.length();
        vector<vector<int>> dp(n+1,vector<int> (m+1,0));
        
        for(i=0;i<=n;i++)
            dp[i][0]=i;
        for(i=0;i<=m;i++)
            dp[0][i]=i;
        
        for(i=1;i<n+1;i++)
        {
            for(j=1;j<m+1;j++)
            {
                if(w1[i-1]==w2[j-1])
                dp[i][j]=dp[i-1][j-1];
                else
                    dp[i][j]=1+min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
            }
        }
        
        return dp[n][m];
    }