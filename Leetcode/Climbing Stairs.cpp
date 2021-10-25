    int climbStairs(int n) 
    {
        int i,t[n];
        
        if(n<=2)
            return n;
        
        t[0]=1;
        t[1]=2;
        
        for(i=2;i<n;i++)
            t[i]=t[i-1]+t[i-2];
        
        return t[n-1];
        
    }