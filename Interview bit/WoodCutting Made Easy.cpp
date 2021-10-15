int search(vector<int> &a, int b) 
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


int Solution::solve(vector<int> &a, int b) 
{
    int i,j,n=a.size(),m,ans;

    sort(a.begin(),a.end());

    for(i=a[n-1];i>=0;i--)
    {
        j= search(a,i);
        m=0;
        for(;j<n;j++)
        {
            m+=a[j]-i;
        }

        if(m>=b)
        {
            ans=i;
            break;
        }
        
    }

    return ans;
}