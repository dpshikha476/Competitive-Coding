    string nostring(string s)
    {
        int i,k=1;
        int b[26]={0};
        string r="";
        
        for(i=0;i<s.length();i++)
        {
            if(b[s[i]-'a']==0)
            {
                b[s[i]-'a']=k;
                k++;
            }
        }
        
        for(i=0;i<s.length();i++)
        r=r+to_string(b[s[i]-'a']);
        
        return r;
        
    }
    
    
    bool areIsomorphic(string s1, string s2)
    {
        
        if(s1.length()!=s2.length())
        return false;
        
        string r1="",r2="";
        
        r1=nostring(s1);
        r2=nostring(s2);
        
        
        if(r1==r2)
        return true;
        
        return false;
        
    }