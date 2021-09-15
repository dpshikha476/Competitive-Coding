bool isAnagram(string s, string r) 
    {
        int n=r.length(),m=s.length(),i;
        unordered_map<char,int> p,g;
        
        if(n!=m)
            return false;
        
        for(i=0;i<m;i++)
            p[s[i]]++;
        
        for(i=0;i<n;i++)
            g[r[i]]++;
        
        for(i=0;i<n;i++)
        {
            if(p.find(r[i])==p.end())
                return false;
            
            else if(p[r[i]]!=g[r[i]])
                return false;
            
            
        }
        
        return true;
    }