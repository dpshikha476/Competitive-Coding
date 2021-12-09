int solve(string a, string b, string c)
    {
        int i,j,n=a.length(),m=b.length(),l=c.length(),t[n+1][m+1]; 
        memset(t,-1,sizeof(t));
        t[0][0]=1;
        
        for(i=1;i<n+1;i++)
        {
            if(a[i-1]==c[i-1])
            {
                t[i][0]=t[i-1][0];
            }
            else
                t[i][0]=0;
        }
        
        for(i=1;i<m+1;i++)
        {
            if(b[i-1]==c[i-1])
            {
                t[0][i]=t[0][i-1];
            }
            else
                t[0][i]=0;
        }
        
        for(i=1;i<n+1;i++)
        {
            for(j=1;j<m+1;j++)
            {
                if(a[i-1]==c[i+j-1] && b[j-1]==c[i+j-1])
                t[i][j]=t[i-1][j] || t[i][j-1];
                
                else if(a[i-1]==c[i+j-1])
                t[i][j]=t[i-1][j];
                
                else if(b[j-1]==c[i+j-1])
                t[i][j]=t[i][j-1];
                
                else
                t[i][j]=0;
            }
        }
        
        return t[n][m];
    }
    
    bool isInterleave(string a, string b, string c) 
    {
        int n=a.length(),m=b.length(),l=c.length();
        if(n+m !=l)
        return false;
        
        return solve(a,b,c);
    }