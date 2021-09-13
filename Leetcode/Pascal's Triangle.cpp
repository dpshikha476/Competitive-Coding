    vector<vector<int>> generate(int n) 
    {
        vector<vector<int>> v;
        int i,j;
        
        if(n==1)
        {
            v.push_back({1});
            return v;
        }
        if(n==2)
        {
            v.push_back({1});
            v.push_back({1,1});
            return v;
        }
        
        v.push_back({1});
        v.push_back({1,1});
        
        for(i=2;i<n;i++)
        {
            vector<int> v1;
            v1.push_back(1);
            
            for(j=0;j<i-1;j++)
            {
                v1.push_back(v[i-1][j]+v[i-1][j+1]);
            }
            v1.push_back(1);
            
            v.push_back(v1);
            v1.clear();
            
        }
        
        
        return v;
        
    }