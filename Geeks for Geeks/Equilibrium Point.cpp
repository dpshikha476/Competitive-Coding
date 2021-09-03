    int equilibriumPoint(long long a[], int n) 
    {
        int i;
        
        if(n==1)
        return 1;
        
        for(i=1;i<n;i++)
            a[i]+=a[i-1];
        
        for(i=1;i<n;i++)
        {
            if(a[i-1]==a[n-1]-a[i])
            return i+1;
        }
        
        return -1;
        
    }