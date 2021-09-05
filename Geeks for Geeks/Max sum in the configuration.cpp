int max_sum(int a[],int n)
{
    int i,s=0,c=0,m,r=0;
    
    for(i=0;i<n;i++)
    s+=a[i];
    
    for(i=0;i<n;i++)
    c+=i*a[i];
    
    m=c;
    
    for(i=1;i<n;i++)
    {
        r=c-(s-a[i-1])+a[i-1]*(n-1);
        
        c=r;
        
        m=max(r,m);
    }
    
    return m;
    
}