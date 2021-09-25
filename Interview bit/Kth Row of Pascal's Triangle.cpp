vector<int> Solution::getRow(int n) 
{
        vector<vector<int>> v;
        v.clear();
        int i,j;
        
        if(n==0)
        return {1};

        if(n==1)
        {
            return {1,1};
        }
        
        v.push_back({1});
        v.push_back({1,1});
        
        for(i=2;i<=n;i++)
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
        
        
        return v[n];
}
