    int singleNumber(vector<int>& a) 
    {
        int i,n=a.size();
        unordered_map<int,int> m;
        
        for(i=0;i<n;i++)
            m[a[i]]++;
        
        for(auto it=m.begin();it!=m.end();it++)
            if(it->second==1)
                return it->first;
        
        
        return -1;
    }