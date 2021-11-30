int maxSumIS(int a[], int n)  
	{  
	   int i,j,t[n],m=INT_MIN;
	   
	   for(i=0;i<n;i++)
	   t[i]=a[i];
	   
	   for(i=1;i<n;i++)
	   {
	        for(j=0;j<n && j<i;j++)
	        {
	            if(a[i]>a[j])
	            t[i]=max(t[i],a[i]+t[j]);
	        }
	   }
	   
	   for(i=0;i<n;i++)
	   m=max(m,t[i]);

        return m;	   
	}  