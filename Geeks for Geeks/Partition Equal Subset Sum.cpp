int equalPartition(int n, int a[])
    {
        int i,j,s=0;
        
        for(i=0;i<n;i++)
        s+=a[i];
        
        if(s%2==1)
        return 0;
        
        s=s/2;
        
        bool t[n+1][s+1];
        
        for(i=0;i<n+1;i++)
        {
            for(j=0;j<s+1;j++)
            {
                if(i==0)
                t[i][j]=false;
                
                if(j==0)
                t[i][j]=true;
            }
        }
        
        for(i=1;i<n+1;i++)
        {
            for(j=1;j<s+1;j++)
            {
                if(a[i-1]<=j)
                t[i][j]=t[i-1][j-a[i-1]] || t[i-1][j];
                
                else
                t[i][j]=t[i-1][j];
            }
        }
        
        if(t[n][s])
        return 1;
        
        return 0;
        
    }