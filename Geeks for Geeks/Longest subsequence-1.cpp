int longestSubsequence(int n, int a[])
    {
        int i,j,t[n],m=1;
        
        for(i=0;i<n;i++)
        t[i]=1;
        
        for(i=1;i<n;i++)
        {
            for(j=0;j<i;j++)
            {
                if(a[i]==a[j]+1 || a[i]==a[j]-1)
                t[i]=max(t[i],t[j]+1);
                
                m=max(m,t[i]);
            }
        }
        
        return m;
    }