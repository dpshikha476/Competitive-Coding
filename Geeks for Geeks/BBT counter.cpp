    long long int countBT(int h) 
    { 
        long long int i,m=1000000007,dp[h+1];
        
        dp[0]=dp[1]=1;
        
        for(i=2;i<h+1;i++)
        dp[i]=(dp[i-1]*(2*dp[i-2]%m + dp[i-1]%m))%m;
        
        return dp[h];
    }