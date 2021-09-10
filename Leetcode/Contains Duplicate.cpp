 bool containsDuplicate(vector<int>& a) 
    {
        int i;
        unordered_map<int,int> m;
        
        for(i=0;i<a.size();i++)
            m[a[i]]++;
        
        for(auto it=m.begin();it!=m.end();it++)
        {
            if(it->second>=2)
                return true;
        }
        
        return false;
        
    }