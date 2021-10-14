int Solution::solve(vector<int> &a, int b) 
{
    int l=0,r=a.size()-1,m,ans=0;

    if(a[r]<=b)
    return r+1;

    if(r==0)
    {
        if(a[0]<=b)
        return 1;
        else 
        return 0;
    }

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

    return ans+1;
}
