int Solution::solve(vector<int> &a) 
{
    sort(a.begin(),a.end());
    int i,n=a.size();

    if(a[n-1]==0)
    return 1;
    
    for(i=0;i<n-1;i++)
    {
        if(a[i]!=a[i+1])
        {
            if(a[i]==n-i-1)
            return 1;
        }
    }

    return -1;
}