int minimumCost(int cost[], int n, int w) 
	{ 
        int i,j,t[w+1];
        
        for(i=0;i<w+1;i++)
        t[i]=INT_MAX;
        
        t[0]=0;
        
        for(i=1;i<w+1;i++)
        {
            for(j=1;j<=n && j<=i;j++)
            {
                if(cost[j-1]!=-1 && t[i-j]!=INT_MAX)
                t[i]=min(cost[j-1]+t[i-j] , t[i]);
            }
        }
        
        return t[w]==INT_MAX?-1:t[w];
	} 