    vector<int> twoSum(vector<int>& a, int t) 
    {
        unordered_map<int,int> m;
        vector<int> v;
        int i;
        
        for(i=0;i<a.size();i++)
        {
            if(m.find(t-a[i])!=m.end())
            {
                v.push_back(i);
                v.push_back(m[t-a[i]]);
                break;
            }
            else
                m[a[i]]=i;
        }
        
        sort(v.begin(),v.end());        
        return v;
    }