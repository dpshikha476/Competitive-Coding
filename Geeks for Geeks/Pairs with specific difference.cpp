 int maxSumPairWithDifferenceLessThanK(int a[], int n, int k)
    {
        int i,m=0;
        sort(a,a+n);
        
        for(i=n-1;i>0;i--)
        {
            if(a[i]-a[i-1]<k)
            {
                m+=a[i];
                m+=a[i-1];
                
                i--;
            }
        }
        
        return m;
         
    }