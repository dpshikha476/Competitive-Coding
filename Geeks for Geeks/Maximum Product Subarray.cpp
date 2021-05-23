	long long maxProduct(int *a, int n) 
	{
	    long long mi=a[0],ma=a[0],i;
	    long long mp=a[0];
	    
	    for(i=1;i<n;i++)
	    {
	        if(a[i]<0)
	        swap(mi,ma);
	        
	        mi= min((long long)a[i],mi*(long long)a[i]);
	        ma=max(ma*(long long)a[i],(long long)a[i]);
	        
	        mp=max(mp,ma);
	    }
	    
	    return mp;
	}