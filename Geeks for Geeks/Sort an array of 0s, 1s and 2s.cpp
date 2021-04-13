void sort012(int a[], int n)
    {
        vector<int> v;
        int i;
        
        for(i=0;i<n;i++)
        {
            if(a[i]==0)
            v.push_back(a[i]);
        }
        
        for(i=0;i<n;i++)
        {
            if(a[i]==1)
            v.push_back(a[i]);
        }
        
        for(i=0;i<n;i++)
        {
            if(a[i]==2)
            v.push_back(a[i]);
        }
        
         for(i=0;i<v.size();i++)
         a[i]=v[i];
    }