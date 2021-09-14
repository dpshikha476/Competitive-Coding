int longestCommonSubstr (string s, string r, int x, int y)
    {
        int i,j,t[x+1][y+1],m=0;
        
        for(i=0;i<x+1;i++)
        {
            for(j=0;j<y+1;j++)
            {
                if(i==0 || j==0)
                t[i][j]=0;
            }
        }
        
        for(i=1;i<x+1;i++)
        {
            for(j=1;j<y+1;j++)
            {
                if(s[i-1]==r[j-1])
                {
                    t[i][j]=1+t[i-1][j-1];
                    m=max(t[i][j],m);
                }
                
                else
                t[i][j]=0;
            }
        }
        
        return m;
    }