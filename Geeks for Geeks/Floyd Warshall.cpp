void shortest_distance(vector<vector<int>>&dp)
{
	int n = dp.size();
        for(int k=0;k<n;k++)
        {
           for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(dp[i][k]!=-1 && dp[k][j]!=-1)
                    {
                        if(dp[i][j]==-1)
                            dp[i][j] = dp[i][k] + dp[k][j];
                        else
                            dp[i][j] = min(dp[i][j],dp[i][k]+dp[k][j]);
                    }
                }
            }
	}
}