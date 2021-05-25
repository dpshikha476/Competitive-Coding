int trappingWater(int a[], int n)
{
        int i,s=0,m=INT_MIN;
        int l[n],r[n];
        
        l[0]=a[0];
        for(i=1;i<n;i++)
        {
            l[i]=max(l[i-1],a[i]);
        }
        
        r[n-1]=a[n-1];
        for(i=n-2;i>=0;i--)
        {
            r[i]=max(r[i+1],a[i]);
        }
        
        for(i=0;i<n;i++)
        {
            s+= (min(l[i],r[i]) - a[i]);
        }
        
        return s;
        
}