
    int t[201][201];
    
    int solve(int n,int k)
    {
        if(k==0 || k==1 || n==1)
        return k;
        
        if(t[n][k]!=-1)
        return t[n][k];
        
        int ans=INT_MAX;
        
        for(int i=1;i<=k;i++)
        {
            int temp=1+max(solve(n-1,i-1),solve(n,k-i));
            
            ans=min(temp,ans);
        }
        
        return t[n][k]=ans;
    }
    
    int eggDrop(int n, int k) 
    {
        memset(t,-1,sizeof(t));
        return solve(n,k);
    }