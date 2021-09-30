    bool wordPattern(string p, string s) 
    {
        s=s+' ';
        int i,j=0,k=0;
        string r="",v="";
        unordered_map<char,int> m;
        unordered_map<string,int> a;
        
        for(i=0;i<p.length();i++)
        {
            if(m.find(p[i])==m.end())
            {
                m[p[i]]=j;
                j++;
            }   
        }
        
        for(i=0;i<p.length();i++)
            r=r+to_string(m[p[i]]);
        
        j=0;
        for(i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                string g=s.substr(k,i-k);
                if(a.find(g)==a.end())
                {
                    a[g]=j;
                    j++;
                }
                k=i+1;
            }   
        }
        
        k=0;
        for(i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                    string g=s.substr(k,i-k);
                    v=v+to_string(a[g]);
                    k=i+1;
            }   
        }
        
        cout<<r<<" "<<v;
        if(r==v)
            return true;
        
        return false;
        
    }