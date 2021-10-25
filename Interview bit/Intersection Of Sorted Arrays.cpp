vector<int> Solution::intersect(const vector<int> &a, const vector<int> &b)
{
    vector<int> v;
    int i=0,j=0;

    while(i<a.size() && j<b.size())
    {
        if(a[i]==b[j])
        {
            v.push_back(a[i]);
            i++;
            j++;
        }
        else if(a[i]>b[j])
        j++;
        else
        i++;
    }

    return v;
}