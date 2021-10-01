vector<vector<string>> groupAnagrams(vector<string>& s) 
    {
        vector<vector<string>> v;
        vector<string> t(s);
        unordered_map<string,vector<string>> m;
        int i;
        
        for(i=0;i<t.size();i++)
         sort(t[i].begin(),t[i].end());
        
        for(i=0;i<s.size();i++)
        {
            m[t[i]].push_back(s[i]);
        }
        
        for(auto it:m)
        {
            v.push_back(it.second);
        }
        
        return v;
    }