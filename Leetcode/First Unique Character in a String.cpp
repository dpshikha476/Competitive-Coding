    int firstUniqChar(string s) 
    {
        int i;
        unordered_map<char,pair<int,int>> m;
        
        for(i=0;i<s.length();i++)
        {
            if(m.find(s[i])==m.end())
            {
                m[s[i]].first=i;
                m[s[i]].second++;
            }
            else
            {
                m[s[i]].second++;
            }
        }
        
        int n=-1;
        
        for(auto it=m.begin();it!=m.end();it++)
        {
            pair<int,int> p=it->second;
            if(p.second==1)
                n= p.first;  
        }
        
        return n;
        
        
    }