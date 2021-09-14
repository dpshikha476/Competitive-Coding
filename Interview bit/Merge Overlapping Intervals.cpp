bool cmp(Interval a,Interval b)
{
    return (a.start<b.start);
}
vector<Interval> Solution::merge(vector<Interval> &a) 
{
    int i;

    if(a.size()==0)
    return a;

    sort(a.begin(),a.end(),cmp);

    vector<Interval> v;
    Interval k=a[0];

    for(i=1;i<a.size();i++)
    {
        if(k.end>=a[i].start)
        {
            k.end=max(k.end,a[i].end);
        }
        else
        {
            v.push_back(k);
            k=a[i];
        }  
    }

    v.push_back(k);

    return v;
}