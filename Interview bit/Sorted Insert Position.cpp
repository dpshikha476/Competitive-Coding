int Solution::searchInsert(vector<int> &a, int b) 
{
    int l=0,r=a.size()-1,m,ans=0;

    if(a[r]<=b)
    {
        if(a[r]==b)
        return r;
        else
        return r+1;
    }

    if(r==0)
    {
        if(a[0]>=b)
        return 0;
        else if(a[0]<b)
        return 1;
    }

    if(a[0]>=b)
    return 0;

    while(l<=r)
    {
        m=(r-l)/2+l;

        if(a[m]<=b)
        {
            l=m+1;
            ans=m;
        }
        else
        r=m-1;

    }

    if(a[ans]==b)
    return ans;

    return ans+1;
}