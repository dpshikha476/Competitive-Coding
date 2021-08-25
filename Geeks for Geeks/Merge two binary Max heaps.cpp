    void heapify(vector<int> &v,int n,int i)
    {
        if(i>=n)
        return;
        
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
    
    
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m)
    {
        vector<int> v;
        
        for(int i=0;i<n;i++)
        v.push_back(a[i]);
        
        for(int i=0;i<m;i++)
        v.push_back(b[i]);
        
        int k=n+m;
        
        for(int i=k/2 -1;i>=0;i--)
        heapify(v,k,i);
        
        return v;
        
    }