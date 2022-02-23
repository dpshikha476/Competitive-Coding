long long int maximizeSum(long long int a[], int n, int k)
    {
        sort(a,a+n);
        int i=0;
        
        while(i<n && a[i]<0 && k)
        {
            a[i]*=-1;
            k--;
            i++;
        }
        
        if(i<n && k%2!=0)
        {
            if(a[i]>abs(a[i-1]))
            a[i-1]*=-1;
            else
            a[i]*=-1;
        }
        
        if(i==n && k%2!=0)
            a[n-1]*=-1;

        return accumulate(a,a+n,0);
    }