int solveWordWrap(vector<int> a, int k) 
    { 
        int i,j,c=-1,cost,n=a.size();
        int dp[n];
        dp[n-1]=0;
        
        for(i=n-2;i>=0;i--)
        {
            c=-1;
            dp[i]=INT_MAX;
            
            for(j=i;j<n;j++)
            {
                c+=(a[j]+1);
                
                if(c>k)
                break;
                
                if(j==n-1)
                cost=0;
                else
                cost=(k-c)*(k-c)+dp[j+1];
                
                dp[i]=min(cost,dp[i]);
            }
        }

        return dp[0];
    } 