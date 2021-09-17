vector<int> Solution::plusOne(vector<int> &a) 
{
    int n=a.size(),i,s=0,c=1;
    vector<int> v;
    reverse(a.begin(),a.end());

    for(i=0;i<n;i++)
    {
        s=a[i]+c;
        c=s/10;
        s=s%10;

        v.push_back(s);
    }

    while(c)
    {
        v.push_back(c%10);
        c=c/10;
    }

    while(v[v.size()-1]==0 && v.size()>1)
    v.pop_back();

    reverse(v.begin(),v.end());
    
    return v;

}