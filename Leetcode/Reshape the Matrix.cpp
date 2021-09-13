    vector<vector<int>> matrixReshape(vector<vector<int>>& a, int r, int c) 
    {
        vector<vector<int>> v;
        vector<int> v1;
        int n,m,i,j,k=0;
        
        n=a.size();
        m=a[0].size();
        
        if(n==r && m==c)
            return a;
        
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
                v1.push_back(a[i][j]);
        }
        
        if(v1.size()!=r*c)
            return a;
        
        for(i=0;i<r;i++)
        {
            vector<int> v2;
            for(j=0;j<c;j++)
            {
                v2.push_back(v1[k]);
                k++;
            }
            
            v.push_back(v2);
            v2.clear();
        }
        
        return v;
        
    }