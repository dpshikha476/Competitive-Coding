 int deleteAndEarn(vector<int>& a) 
    {
        int i,n=a.size(),dp[100005]={0};
        vector<int> b(100005,0);

        for(i=0;i<n;i++)
            b[a[i]]+=a[i];

        dp[1]=b[1];
        dp[2]=max(b[1],b[2]);
        
        for(i=3;i<100005;i++)
        {
            dp[i]=max(dp[i-2]+b[i] , dp[i-1]);
        }
        
        return max(dp[100004],dp[100003]);
    }