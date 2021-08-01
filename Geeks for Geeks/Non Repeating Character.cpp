    char nonrepeatingCharacter(string s)
    {
        map<char, pair<int,int>> m;
        int i,ma=INT_MAX;
        char ch='$';
        
        for(i=0;i<s.length();i++)
        {
            m[s[i]].first=i;
             m[s[i]].second+=1;
        }
        
        for(auto it=m.begin();it!=m.end();it++)
        {
            if(it->second.second==1)
            {
                if(it->second.first<ma)
                {
                    ch=it->first;
                    ma=it->second.first;
                }
                
            }
        }
        
        
        return ch;
        
    }