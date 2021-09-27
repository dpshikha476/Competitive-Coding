vector<vector<int> > Solution::diagonal(vector<vector<int> > &a) 
{
    int n=a.size(),i,j,k,m=n+n-2;
    vector<vector<int> > v;

    for(i=0;i<=m;i++)
    {
        vector<int> v1;
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                if(j+k==i)
                v1.push_back(a[j][k]);
            }
        }
        v.push_back(v1);
        v1.clear();
    }

    return v;

}