    void heapify(vector<int> &v,int n,int i)
    {
        int p=i;
        int l=2*i+1;
        int r=2*i+2;
        
        if(l<n && v[l]>v[p])
        p=l;
        
        if(r<n && v[r]>v[p])
        p=r;
        
        if(p!=i)
        {
            swap(v[i],v[p]);
            heapify(v,n,p);
        }
        
    }
    
    
    vector<int> mergeKArrays(vector<vector<int>> a, int k)
    {
        vector<int> v;
        
        for(int i=0;i<k;i++)
        {
            for(int j=0;j<k;j++)
            v.push_back(a[i][j]);
        }
        
        int n=k*k;
        
        for(int i=n/2 -1;i>=0;i--)
        heapify(v,n,i);
        
        for(int i=n-1;i>0;i--)
        {
            swap(v[0],v[i]);
            heapify(v,i,0);
        }
        
        
        return v;
        
    }