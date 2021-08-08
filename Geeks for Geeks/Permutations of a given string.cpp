	   void permut(string s, int l, int r, vector<string> &v)
	    {
	        if(l==r)
	        {
	            v.push_back(s);
	        }
	        
	        else
	        {
	            for(int i=l;i<=r;i++)
    	        {
    	            swap(s[i],s[l]);
    	            
    	            permut(s,l+1,r,v);
    	            
    	            swap(s[i],s[l]);
    	        }
	        }
	        
	    }
	
		vector<string> find_permutation(string S)
		{
		    vector<string> v;
	        permut(S,0,S.length()-1,v);	    
	        
	        sort(v.begin(),v.end());
	        
	        return v;
		    
		}