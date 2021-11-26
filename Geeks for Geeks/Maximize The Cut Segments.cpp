    int maximizeTheCuts(int n, int x, int y, int z)
    {
        int i,j,t[n+1],l[3]={x,y,z};
        memset(t,-1,sizeof(t));
        t[0]=0;
        
        for(i=1;i<=n;i++)
        {
            for(j=0;j<3;j++)
            {
                if(i>=l[j] && t[i-l[j]]!=-1)
                {
                    t[i]=max(t[i],1+t[i-l[j]]);
                }
            }
        }
        
        return t[n]<=0?0:t[n];
    }