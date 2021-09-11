int Solution::solve(vector<int> &a, int b) 
{
    
    int n=a.size(),s=0,i=0,j=0,ma=INT_MAX,c=0;

    for(i=0;i<n;i++)
    c+=a[i];

    for(i=0;i<n-b;i++)
    s+=a[i];

    ma=min(ma,s);

    for(i=n-b;i<n;i++)
    {
        s+=a[i];
        s-=a[j];
        j++;
        ma=min(ma,s);
    }

    return c-ma;
}