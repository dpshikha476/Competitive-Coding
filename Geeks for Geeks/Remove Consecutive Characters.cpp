    string removeConsecutiveCharacter(string s)
    {
        stack<char> c;
        string r="";
        int i;
        
        for(i=0;i<s.length();i++)
        {
            if(c.empty())
            c.push(s[i]);
            else if(c.top()!=s[i])
            c.push(s[i]);
        }
        
        
        while(!c.empty())
        {
            r=r+c.top();
            c.pop();
        }
        
        reverse(r.begin(),r.end());
        
        return r;
        
    }