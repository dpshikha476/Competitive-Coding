bool cmp(Interval a,Interval b)
{
    return (a.start<b.start);
}

vector<Interval> Solution::insert(vector<Interval> &a, Interval newInterval) {
    
    a.push_back(newInterval);

    if(a.size()<=1)
    return a;

    int i;

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