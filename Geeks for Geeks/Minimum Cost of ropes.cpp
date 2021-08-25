long long minCost(long long a[], long long n) 
    {
        if(n==1)
        return 0;
        
        long long i,ans=0,x,y;
        priority_queue<long long, vector<long long>, greater<long long> > q;
        
        for(i=0;i<n;i++)
        q.push(a[i]);
        
        while(q.size()!=1)
        {
            x=q.top();
            q.pop();
            y=q.top();
            q.pop();
            
            ans+=x+y;
            
            q.push(x+y);
        }
        
        return ans;
        
    }