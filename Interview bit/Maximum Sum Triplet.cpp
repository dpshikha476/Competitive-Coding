int maxii(set<int> &s, int &n)
{
    auto it=s.lower_bound(n);
    --it;

    return *it;
}

int Solution::solve(vector<int> &a) 
{
    int i,n=a.size(),b[n],ans=0;

    b[n-1]=a[n-1];
    for(i=n-2;i>=0;i--)
    b[i]=max(b[i+1],a[i]);

    set<int> s;
    s.insert(INT_MIN);

    for(i=0;i<n-1;++i)
    {
        if(b[i+1]>a[i])
        {
            ans=max(ans,maxii(s,a[i])+a[i]+b[i+1]);
        }

        s.insert(a[i]);

    }

    return ans;

}
