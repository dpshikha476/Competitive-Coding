    void sortBySetBitCount(int a[], int n)
    {
        int i,c=0,j,k;
        vector<vector<int>> v(32);
        
        for(i=0;i<n;i++)
        {
            int x=a[i];
            
            while(x)
            {
                x=x&(x-1);
                c++;
            }
            
            v[c].push_back(a[i]);
            c=0;
        }
        
        k=0;
        
        for(i=31;i>=0;i--)
        {
            vector<int> v1=v[i];
            
            for(j=0;j<v1.size();j++)
            {
                a[k]=v1[j];
                k++;
            }
        }
    }