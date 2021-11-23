long nCr(int n, int r)
    {
        if(n<r)
        return 0;
        
       int i,j,m=1000000007;
       long t[n+1][r+1];
       memset(t, -1, sizeof(t));
       
       for(i=0;i<=n;i++)
       {
           for(j=0;j<=min(i,r);j++)
           {
               if(i==0)
               t[i][j]=0;
               else if(j==0 || i==j)
               t[i][j]=1;
               
               else
               t[i][j]=(t[i-1][j-1]%m + t[i-1][j]%m)%m;
           }
       }
       
       return t[n][r]%m;
    }