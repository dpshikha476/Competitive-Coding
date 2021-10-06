long long int  countPS(string s)
    {
        long long int n=s.length(),i,j,l,m=1000000007;
        long long int dp[n+1][n+1];
        memset(dp,0,sizeof(dp));
        
        for(l=1;l<=n;l++)
        {
            for(i=0;l+i<=n;i++)
            {
                j=i+l-1;
                if(l==1)
                dp[i][i]=1;
                
                else if(l ==2)
                {
                    if(s[i]==s[j])
                    dp[i][j]=3;
                    else
                    dp[i][j]=2;
                }
                
                else if(s[i]==s[j])
                dp[i][j]=dp[i+1][j]+dp[i][j-1]+1;
                else
                dp[i][j]=dp[i+1][j]+dp[i][j-1]-dp[i+1][j-1];
                
                dp[i][j]+=m;
                dp[i][j]%=m;
            }
        }
        
        return dp[0][n-1];
       
    }