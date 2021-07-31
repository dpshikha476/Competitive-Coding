    int maxDistance(int a[], int n)
    {
        unordered_map<int,int> m;
        int i,ma=INT_MIN;
        
        for(i=0;i<n;i++)
        {
            if(m.find(a[i])==m.end())
            m[a[i]]=i;
            else
            {
                ma=max(ma,(i-m[a[i]]));
            }
        }
        
        
        if(ma!=INT_MIN)
        return ma;
        
        return 0;
        
    }