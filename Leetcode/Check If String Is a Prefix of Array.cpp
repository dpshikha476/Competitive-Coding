    bool isPrefixString(string s, vector<string>& w) 
    {
        int i;
        string r="";
        
        for(i=0;i<w.size();i++)
        {
            r=r+w[i];
            
            if(r==s)
                return true;
            
            else if(r.length()>s.length())
                return false;
            
        }
        
        return false;
        
    }