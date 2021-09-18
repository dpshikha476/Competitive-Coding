int Solution::maximumGap(const vector<int> &a) 
{
    int i,n=a.size(),res=0,ans,m,l,r;
    int b[n];

    b[n-1]=a[n-1];

    for(i=n-2;i>=0;i--)
    b[i]=max(b[i+1],a[i]);

    for(i=0;i<a.size();i++)
    {
        l=i+1;
        r=a.size()-1;
        ans=i;

        while(l<=r)
        {
            m=(r-l)/2+l;

            if(a[i]<=b[m])
            {
                ans=max(ans,m);
                l=m+1;
            }
            else
            r=m-1;

        }

        res=max(res, ans-i);

    }

    return res;
}