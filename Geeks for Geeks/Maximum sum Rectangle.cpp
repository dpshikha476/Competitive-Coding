int kadane(vector<int> v)
    {
        int i,s=0,m=INT_MIN;
        
        for(i=0;i<v.size();i++)
        {
            s=s+v[i];
            
            m=max(s,m);
            
            if(s<0)
            s=0;
            
        }
        
        return m;
    }
    
    int maximumSumRectangle(int n, int m, vector<vector<int>> a) 
    {
        int i,j,k,max_sum=INT_MIN;
        
        for(i=0;i<n;i++)
        {
            vector<int> v(m,0);
            for(j=i;j<n;j++)
            {
                for(k=0;k<m;k++)
                {
                    v[k]+=a[j][k];
                }
                
                int m=kadane(v);
                max_sum=max(max_sum,m);
            }
        }
        
        return max_sum;
    }