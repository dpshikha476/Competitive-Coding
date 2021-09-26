vector<vector<int>> generateMatrix(int n) 
    {
        int i,c=1,sc=0,sr=0,ec=n-1,er=n-1;
        vector<vector<int>> v(n, vector<int> (n, 0));
        
        while(sc<=ec && sr<=er)
        {
            for(i=sc;i<=ec;i++)
            {
                v[sr][i]=c;
                c++;
            }
            sr++;
            if(c-1==n*n)
                return v;
            
            for(i=sr;i<=er;i++)
            {
                v[i][ec]=c;
                c++;
            }
            ec--;
            if(c-1==n*n)
                return v;
            
            for(i=ec;i>=sc;i--)
            {
                v[er][i]=c;
                c++;
            }
            er--;
            if(c-1==n*n)
                return v;
            
            for(i=er;i>=sr;i--)
            {
                v[i][sc]=c;
                c++;
            }
            sc++;
            if(c-1==n*n)
                return v;
            
        }
        
        return v;

    }