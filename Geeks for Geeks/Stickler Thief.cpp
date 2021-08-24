    int FindMaxSum(int a[], int n)
    {
        long long int s=a[0],c=0,m,i;
        
        for(i=1;i<n;i++)
        {
            m=max(s,c);
            s=c+a[i];
            c=m;
        }
        
        return max(c,s);
    }