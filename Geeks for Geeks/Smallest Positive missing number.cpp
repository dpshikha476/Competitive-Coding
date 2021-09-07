    int num(int a[],int n)
    {
        int i;
        
        for(i=0;i<n;i++)
        {
            if(abs(a[i])-1 <n && a[abs(a[i])-1] >0)
            a[abs(a[i])-1]=-a[abs(a[i])-1];
        }
        
        for(i=0;i<n;i++)
        {
            if(a[i]>0)
            return i+1;
        }
        
        return n+1;
    }
    
    int missingNumber(int a[], int n) 
    { 
        int i,j=0,m;
        
        for(i=0;i<n;i++)
        {
            if(a[i]<=0)
            {
                swap(a[i],a[j]);
                j++;
            }
        }
        
        return num(a+j,n-j);
        
    } 