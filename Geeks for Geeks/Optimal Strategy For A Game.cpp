long long t[1001][1001];
    
    long long solve(int a[], int i, int j)
    {
        if(i>j)
        return 0;
        
        if(t[i][j]!=-1)
        return t[i][j];
        
        int x=a[i]+min(solve(a,i+2,j),solve(a,i+1,j-1));
        int y=a[j]+min(solve(a,i+1,j-1),solve(a,i,j-2));
        
        return t[i][j]=max(x,y);
        
    }
    
    long long maximumAmount(int a[], int n)
    {
        memset(t,-1,sizeof(t));
        
        return solve(a,0,n-1);
        
    }