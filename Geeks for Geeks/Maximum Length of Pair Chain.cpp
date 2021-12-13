    int findLongestChain(vector<vector<int>>& a) 
    {
        int i,j,n=a.size(),dp[n];
        
        sort(a.begin(),a.end());
        
        for(i=0;i<n;i++)
            dp[i]=1;
        
        for(i=1;i<n;i++)
        {
            for(j=0;j<i;j++)
            {
                if(a[i][0]>a[j][1] && dp[i]<=dp[j])
                    dp[i]=dp[j]+1;
            }
        }
        
        sort(dp,dp+n);
        
        return dp[n-1];
        
    }