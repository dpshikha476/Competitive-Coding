int Solution::perfectPeak(vector<int> &a) 
{
    int i,n=a.size(),b[n],c[n];

    b[0]=a[0];
    for(i=1;i<n;i++)
    b[i]=max(b[i-1],a[i]);

    c[n-1]=a[n-1];

    for(i=n-2;i>=0;i--)
    c[i]=min(c[i+1],a[i]);

    for(i=1;i<n-1;i++)
    {
        if(a[i]>b[i-1] && a[i]<c[i+1])
        return 1;
    }

    return 0;

}