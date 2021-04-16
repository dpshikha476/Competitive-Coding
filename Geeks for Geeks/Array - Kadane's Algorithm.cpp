    long long int maxSubarraySum(int a[], int n)
    {
        long long int ans=0,i,j,m=0;
        
        for(i=0;i<n;i++)
        {
            m=m+a[i];
            if(m<0)
            m=0;
            else if(ans<m)
            ans=m;
        }
        
        return ans;
        
    }