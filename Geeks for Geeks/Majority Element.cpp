int majorityElement(int a[], int n)
    {
        sort(a,a+n);
    
        for(int i=0;i<=n/2;i++)
        {
            if(a[i]==a[n/2+i])
            return a[i];
        }
        
        return -1;
        
    }