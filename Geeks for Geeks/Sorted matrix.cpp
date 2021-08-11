 vector<vector<int>> sortedMatrix(int n, vector<vector<int>> m) 
    {
        int i,j,k=0,a[n*n];
        
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                a[k]=m[i][j];
                k++;
            }
        }
        
        sort(a,a+n*n);
        
        k=0;
        
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                m[i][j]=a[k];
                k++;
            }
        }
        
        return m;
    }