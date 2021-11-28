    string solve(string s)
    {
        unordered_map<char,int> m;
        int i=0,c=0;
        string r="";
        
        for(i=0;i<s.length();i++)
        {
            if(m.find(s[i])==m.end())
            {
                m[s[i]]=c;
                c++;
            }   
        }
        
        for(i=0;i<s.length();i++)
        {
            r+="."+to_string(m[s[i]]);  
        }
        
        return r;
    }
    
    bool isIsomorphic(string s, string t) 
    {
        string a="",b="";
        
        a=solve(s);
        b=solve(t);
        
        if(a==b)
            return true;
        
        return false;
    }