int maxProfit(int k, int n, int a[]) 
    {
        int i,j,dp[2*k+1];
        
        if(k==0 || n<=1)
        return 0;
        
        else if(2*k>n)
        {
            int res=0;
            for(i=1;i<n;i++)
            {
                if(a[i]>a[i-1])
                res+=(a[i]-a[i-1]);
            }
            return res;
        }
        
        dp[0]=-a[0];
        for(i=1;i<2*k+1;i++)
        {
            if(i%2==0)
            dp[i]=INT_MIN;
            else
            dp[i]=0;
        }
        
        for(i=0;i<n;i++)
        {
            for(j=0;j<2*k+1;j++)
            {
                if(j==0)
                dp[j]=max(dp[j],-a[i]);
                
                else if(j%2==0)
                dp[j]=max(dp[j],dp[j-1]-a[i]);
                
                else if(j%2==1)
                dp[j]=max(dp[j],dp[j-1]+a[i]);
            }
        }
        
        return dp[2*k-1];
        
    }