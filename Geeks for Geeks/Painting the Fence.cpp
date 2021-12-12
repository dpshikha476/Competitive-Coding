 long long countWays(int n, int k)
    {
        if(n==0)
        return 0;
        if(n==1)
        return k;
        
        long long m=1000000007,i,p=0,s=k%m,d=(k*(k-1))%m;
        
        for(i=3;i<=n;i++)
        {
            p=d%m;
            d=((s+d)*(k-1))%m;
            s=p%m;
        }
        
        return (s+d)%m;
    }