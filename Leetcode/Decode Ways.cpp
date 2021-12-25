int numDecodings(string s) 
    {
        if(s[0]=='0')
            return 0;
        
       int i,n=s.length(),dp[n+1];
        
        if(n==0)
            return 0;
        
        for(int i=0;i<n+1;i++)
            dp[i]=0;
        
        dp[n]=1;
        
        for(i=n-1;i>=0;i--)
        {
            if(s[i]=='0')
                dp[i]=0;
            else
           { 
                dp[i]+=dp[i+1];
            
                if(i<n-1 && (s[i]=='1' || (s[i]=='2' && s[i+1]<'7')))
                    dp[i]+=dp[i+2];
           }
        }
        
        return dp[0];
    }