    int trap(vector<int>& a) 
    {
        int i,n=a.size(),l[n],r[n],ans=0;
        
        l[0]=a[0];
        
        for(i=1;i<n;i++)
            l[i]=max(l[i-1],a[i]);
        
        r[n-1]=a[n-1];
        
        for(i=n-2;i>=0;i--)
            r[i]=max(r[i+1],a[i]);
        
        for(i=0;i<n;i++)
            ans+=abs(min(l[i],r[i])-a[i]);
        
        return ans;
    }