bool comp(pair<int,int> a,pair<int,int> b)
{
    return a.second<b.second;
}

int maxChainLen(struct val p[],int n)
{
    int i,j,t[n],m=1;
    vector<pair<int,int>> v;
    
    for(i=0;i<n;i++)
    v.push_back({p[i].first,p[i].second});
    
    sort(v.begin(),v.end(),comp);
    
    for(i=0;i<n;i++)
    t[i]=1;
    
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(v[i].first > v[j].second && t[i]<t[j]+1)
            t[i]=1+t[j];

        }
    }
    
    for(i=0;i<n;i++)
    m=max(m,t[i]);
    
    return m;
}