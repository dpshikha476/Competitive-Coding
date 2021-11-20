    vector<int> twoSum(vector<int>& a, int t) 
    {
        vector<int> v;
        unordered_map<int,int> m;
        
        for(int i=0;i<a.size();i++)
        {
            if(m.find(t-a[i])!=m.end())
            {
                v.push_back(m[t-a[i]]);
                v.push_back(i+1);
                return v;
            }
            if(m.find(a[i])==m.end())
                m[a[i]]=i+1;
        }
        
        return v;
    }