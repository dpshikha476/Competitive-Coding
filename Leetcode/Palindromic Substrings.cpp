int countSubstrings(string s) 
    {
        string r=s;
        int i,j,k,ans=0,n=s.length();
        bool t[n][n];
        memset(t,false,sizeof(t));
        
        for(i=0;i<n;i++)
        {
            t[i][i]=true;
            ans++;
        }
        for(i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                t[i][i+1]=true;
                ans++;
            }
            else
            t[i][i+1]=false;
        }
        
        for(k=2;k<n;k++)
        {
            for(i=0,j=i+k;j<n;i++,j++)
            {
                if(s[i]==s[j] && t[i+1][j-1]==true)
                {
                    t[i][j]=true;
                    ans++;
                }
            }
        }
        
        return ans;
        
    }