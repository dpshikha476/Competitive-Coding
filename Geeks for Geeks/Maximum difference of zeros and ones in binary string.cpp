int maxSubstring(string s)
	{
	    int i,c=0,m=0;
	    
	    for(i=0;i<s.length();i++)
	    {
	        if(s[i]=='0')
	        c+=1;
	        else
	        c-=1;
	        
	        m=max(c,m);
	        
	        if(c<0)
	        c=0;
	    }
	    
	    if(m==0)
	    return -1;
	    
	    return m;
	}