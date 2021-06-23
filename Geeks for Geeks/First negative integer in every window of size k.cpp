vector<long long> printFirstNegativeInteger(long long int a[],
                                             long long int n, long long int k)
{
    long long int i,j=0;
    vector<long long> v;
    queue<long long int> q;
    
    for(i=0;i<k;i++)
    {
        if(a[i]<0)
        q.push(a[i]);
    }
    
    if(q.empty())
    v.push_back(0);
    else
    v.push_back(q.front());
    
    for(i=k;i<n;i++)
    {
        if(q.front()==a[j])
        q.pop();
        j++;
        if(a[i]<0)
        q.push(a[i]);
        
        if(q.empty())
        v.push_back(0);
        else
        v.push_back(q.front());
    }
    
    return v;
    
}