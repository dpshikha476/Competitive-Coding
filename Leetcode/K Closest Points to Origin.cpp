   vector<vector<int>> kClosest(vector<vector<int>>& a, int k) 
    {
        multimap<double,int> m;
        
        for(int i=0;i<a.size();i++)
        {
            double d=sqrt((a[i][0]*a[i][0])+(a[i][1]*a[i][1]));
            
            m.insert(pair<double, int> (d,i));
        }
        
        vector<vector<int>> r;
        
        for(auto i=m.begin(); i!=m.end() && k--; i++)
        {
            int it=i->second;
            r.push_back(a[it]);
        }
        
        return r;
    }