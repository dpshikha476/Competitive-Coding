    vector<int> solve(string r)
    {
        int z=0, o=0;
        for(int j=0;j<r.length();j++)
        {
            if(r[j]=='0')
                z++;
            else
                o++;
        }
            
        return {z,o};
    }
    
    int findMaxForm(vector<string>& s, int m, int n) 
    {
        if(s.size()==0 || m+n==0)
            return 0;
    
        vector<vector<int>> dp(m+1,vector<int> (n+1,0));
        
        for(int i=0;i<s.size();i++)
        {
            auto p=solve(s[i]);
            for(int j=m;j>=p[0];j--)
            {
                for(int k=n;k>=p[1];k--)
                {
                    dp[j][k]=max(1+ dp[j-p[0]][k-p[1]], dp[j][k]);
                }
            }
            
        }
                               
        return dp[m][n];

    }