int maxGold(int n, int m, vector<vector<int>> a)
    {
        int i,j,ans=0;
        
        for(j=m-2;j>=0;j--)
        {
            for(i=0;i<n;i++)
            {
                int r=a[i][j+1];
                int ru=(i==0)?0:a[i-1][j+1];
                int rd=(i==n-1)?0:a[i+1][j+1];
                
                a[i][j]=a[i][j]+max(r,max(ru,rd));
            }
        }
        
        ans=a[0][0];
        for(i=1;i<n;i++)
        ans=max(ans,a[i][0]);
        
        return ans;
    }