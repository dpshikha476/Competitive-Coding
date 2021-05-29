    int maxProfit(vector<int>& p) 
    {
        int i,l,m;
        l=p.size();
        int a[l],b[l];
        a[0]=p[0];
        for(i=1;i<l;i++)
            a[i]=min(p[i],a[i-1]);
        
        b[l-1]=p[l-1];
        for(i=l-2;i>=0;i--)
            b[i]=max(p[i],b[i+1]);
        
        m=0;
        
        for(i=0;i<l;i++)
            m=max(m,b[i]-a[i]);
        
        return m;
    }