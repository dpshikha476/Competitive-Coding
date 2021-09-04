int findExtra(int a[], int b[], int n) 
    {
        int i;
        
        for(i=0;i<n-1;i++)
        {
            if(a[i]!=b[i])
            return i;
        }
        
        return i;
    }