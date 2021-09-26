int longestSubsequence(int n, int a[])
    {
        int i,j,l[n],m=1;
        
        for(i=0;i<n;i++)
        l[i]=1;
        
        for(i=1;i<n;i++)
        {
            for(j=0;j<i;j++)
            {
                if(a[i]>a[j] && l[i]<=l[j])
                l[i]=1+l[j];
                
            }
        }
        
        for(i=1;i<n;i++)
        m=max(l[i],m);
        
        return m;
    }