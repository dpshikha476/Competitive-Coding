    int findPlatform(int arr[], int dep[], int n)
    {
    	int i,c,p[2361]={0};
    	
    	for(i=0;i<n;i++)
    	{
    	   ++p[arr[i]];
    	   
    	   --p[dep[i]+1];
    	}
    
        c=p[0];
        
        for(i=1;i<2361;i++)
        {
            p[i]=p[i]+p[i-1];
            c=max(c,p[i]);
        }
    	
    	return c;
    }