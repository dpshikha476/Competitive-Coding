vector<int> Solution::repeatedNumber(const vector<int> &ar) 
{
    int i,n=ar.size(),a[n];
    vector<int> v;
    
    for(i=0;i<n;i++)
        a[i]=ar[i];

    for(i = 0; i < n; i++) 
    {
        if (a[abs(a[i]) - 1] > 0)
            a[abs(a[i]) - 1] = -a[abs(a[i]) - 1];
        else
            v.push_back(abs(a[i])); 
    }
    for (i = 0; i < n; i++) 
    {
        if (a[i] > 0)
            v.push_back(i+1);
    }

    return v;
}