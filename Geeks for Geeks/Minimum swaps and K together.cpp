int minSwap(int *a, int n, int k) 
{
    int i,j,c=0,b=0,ans;
    
    for(i=0;i<n;i++)
    if(a[i]<=k)
    ++c;
    
    for(i=0;i<c;i++)
    if(a[i]>k)
    ++b;
    
    ans=b;
    
    for(i=0,j=c;j<n;i++,j++)
    {
        if(a[i]>k)
        --b;
        
        if(a[j]>k)
        ++b;
        
        ans=min(ans,b);
    }
    
    return ans;
}