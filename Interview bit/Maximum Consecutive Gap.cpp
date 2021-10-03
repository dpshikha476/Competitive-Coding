int Solution::maximumGap(const vector<int> &a) 
{
    int i,d=INT_MIN,n=a.size(),b[n];
    
    if(n<2)
    return 0;

    for(i=0;i<n;i++)
    b[i]=a[i];

    sort(b,b+n);

    for(i=0;i<n-1;i++)
    d=max(d,abs(b[i+1]-b[i]));

    return d;
}