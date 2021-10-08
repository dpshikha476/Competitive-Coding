void Solution::arrange(vector<int> &a) 
{
    int i,n=a.size(),b[n];

    for(i=0;i<n;i++)
    b[i]=a[a[i]];

    for(i=0;i<n;i++)
    a[i]=b[i];

}