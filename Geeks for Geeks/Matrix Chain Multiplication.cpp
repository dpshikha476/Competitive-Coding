int t[101][101];
    
    int solve(int a[],int i,int j)
    {
        if(i>=j)
        return 0;
        
        if(t[i][j]!=-1)
        return t[i][j];
        
        int ans=INT_MAX;
        
        for(int k=i;k<=j-1;k++)
        {
            int temp=solve(a,i,k)+solve(a,k+1,j)+a[i-1]*a[k]*a[j];
            
            ans=min(temp,ans);
        }
        
        return t[i][j]=ans;
        
    }
    
    int matrixMultiplication(int n, int a[])
    {
        memset(t,-1,sizeof(t));
        return solve(a,1,n-1);
    }