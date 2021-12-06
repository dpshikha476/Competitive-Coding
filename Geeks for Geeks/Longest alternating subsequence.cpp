		int AlternatingaMaxLength(vector<int>&a)
		{
		    int i,inc=1,dec=1;
		    
		    for(i=1;i<a.size();i++)
		    {
		        if(a[i]>a[i-1])
		        inc=dec+1;
		        else if(a[i]<a[i-1])
		        dec=inc+1;
		    }
		    
		    return max(inc,dec);
		}