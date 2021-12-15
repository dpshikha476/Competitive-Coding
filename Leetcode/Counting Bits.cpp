    vector<int> countBits(int n) 
    {
        vector<int> v(n+1,1);
        v[0]=0;
        int i,k=1;
        
        for(i=1;i<=n;i++)
        {
            if(k*2==i)
                k=k*2;
            
            v[i]+=v[i-k];
        }
        
        return v;
        
    }