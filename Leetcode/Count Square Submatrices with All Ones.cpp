    int countSquares(vector<vector<int>>& a) 
    {
        int i,j,n=a.size(),m=a[0].size(),ans=0;
        
        for(i=0;i<n;i++)
            if(a[i][0]==1)
                ans++;
        
        for(i=0;i<m;i++)
            if(a[0][i]==1)
                ans++;
        
        if(a[0][0]==1)
            ans--;
        
        for(i=1;i<n;i++)
        {
            for(j=1;j<m;j++)
            {
                a[i][j]=(a[i][j])?min(a[i-1][j],min(a[i][j-1],a[i-1][j-1]))+1:0;
                ans+=a[i][j];                    
            }
        }
        
        return ans;
    }