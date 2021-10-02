vector<string> findRepeatedDnaSequences(string s) 
    {
        int i;
        vector<string> v;
        unordered_map<string,int> m;
        
        if(s.length()<10)
            return v;
        
        for(i=0;i<s.length()-9;i++)
        {
            string r=s.substr(i,10);
            m[r]++;
        }
        
        for(auto it:m)
        {
            if(it.second>1)
                v.push_back(it.first);
        }
        
        return v;
        
    }