  int t[101][101];
  
    int longest(string s,string r)
    {
        int i,j,n=s.length(),m=r.length();
        
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=m;j++)
            {
                if(i==0)
                t[i][j]=j;
                
                else if(j==0)
                t[i][j]=i;
            }
        }
        
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(s[i-1]==r[j-1])
                t[i][j]=t[i-1][j-1];
                
                else
                t[i][j]=1+ min(min(t[i-1][j],t[i][j-1]),t[i-1][j-1]);
            }
        }
        
        return t[n][m];
        
    }
    
    int editDistance(string s, string r) 
    {
        memset(t,-1,sizeof(t));
        return longest(s,r);
        
    }