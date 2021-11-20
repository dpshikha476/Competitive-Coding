    bool isHappy(int n) 
    {
        unordered_set<string> m;
        
        if(n==1)
            return true;
        
        int i,s=0;
        string r=to_string(n);
        
        while(true)
        {
            if(m.find(r)!=m.end())
                return false;
            else
                m.insert(r);
            
            for(i=0;i<r.length();i++)
            {
                s+=(r[i]-'0')*(r[i]-'0');
            }
            
            if(s==1)
                return true;
            else
            {
                r=to_string(s);
                s=0;
            }
        }
        
        return false;
    }