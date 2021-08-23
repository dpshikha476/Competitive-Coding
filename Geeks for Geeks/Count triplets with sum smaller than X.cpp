long long countTriplets(long long a[], int n, long long x)
	{
	    int i,j,k,c=0;
	    sort(a,a+n);
	    
	    for(k=0;k<n-2;k++)
	    {
	        i=k+1;
	        j=n-1;
	        
	        while(i<j)
	        {
	            if(a[i]+a[j]+a[k]>=x)
	                j--;
	            else 
	            {
	                c+=(j-i);
	                i++;
	            }
	        }
	    }
	    
	    return c;
	}