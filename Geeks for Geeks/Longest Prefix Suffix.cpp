int lps(string s) 
	{
	    vector<int> lps(s.length(),0);
	    int i=1,j=0;
	    
	    while(i<s.length())
	    {
	        if(s[i]==s[j])
	        {
	            lps[i]=j+1;
	            i++;
	            j++;
	        }
	        else
	        {
	            if(j==0)
	            i++;
	            else
	            j=lps[j-1];
	        }
	    }
	    
	    return lps[s.length()-1];
	}