	string printMinIndexChar(string s, string p)
	{
	    unordered_map<char,int> m;
	    string a;
	    int i,mi=INT_MAX;
	    
	    for(i=0;i<s.length();i++)
	    {
	        if(m.find(s[i])==m.end())
	        m[s[i]]=i;
	    }
	    
	    for(i=0;i<p.length();i++)
	    {
	        if(m.find(p[i])!=m.end())
	        {
	            auto it=m.find(p[i]);
	            if(it->second<mi)
	            {
	                mi=it->second;
	                a=it->first;
	            }
	        }
	    }
	    
	    if(mi!=INT_MAX)
	    return a;
	    
	    return "$";
	    
	}