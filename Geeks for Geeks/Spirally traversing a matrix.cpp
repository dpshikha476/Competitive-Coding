vector<int> spirallyTraverse(vector<vector<int> > a, int r, int c) 
    {
        int i,sc=0,sr=0,er=r-1,ec=c-1,count=0;
        vector<int> v;
    
        while(sc<=ec && sr<=er)
        {
            for(i=sc;i<=ec;i++)
            {
                v.push_back(a[sr][i]);
                count++;
            }
            sr++;
            
            if(count==r*c)
            return v;
            
            for(i=sr;i<=er;i++)
            {
                v.push_back(a[i][ec]);
                count++;
            }
            ec--;
            
            if(count==r*c)
            return v;
            
            for(i=ec;i>=sc;i--)
            {
                v.push_back(a[er][i]);
                count++;
            }
            er--;
            
            if(count==r*c)
            return v;
            
            for(i=er;i>=sr;i--)
            {
                v.push_back(a[i][sc]);
                count++;
            }
            sc++;
            
            if(count==r*c)
            return v;
            
        }
        
        return v;
    }