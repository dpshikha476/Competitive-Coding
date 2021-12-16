    int coinChange(vector<int>& coins, int amt) 
    {
        int i,j,n=coins.size();
        int t[amt+1];
        t[0]=0;
        
        for(i=1;i<=amt;i++)
        {
            t[i]=INT_MAX-1;
            for(j=0;j<n;j++)
            {
                if(i-coins[j]>=0)
                    t[i]=min(t[i],t[i-coins[j]]+1);
            }
        }  
        
        return (t[amt]==INT_MAX-1)?-1:t[amt];
        
    }