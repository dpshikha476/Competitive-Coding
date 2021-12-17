int rob(vector<int>& a) 
    {
        int i,n=a.size(),dp[n+1];
        dp[0]=0;
        dp[1]=a[0];
        for(i=2;i<=n;i++)
        {
            dp[i]=max(dp[i-2]+a[i-1],dp[i-1]);
        }

        return dp[n];
    }