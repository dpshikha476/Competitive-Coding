int Solution::solve(vector<int> &a, int b) 
{
    int i=0,j=0,n=a.size(),c=0,m=INT_MIN;

    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        c++;

        while(c>b)
        {
            if(a[j]==0)
            c--;
            j++;
        }

        if(i-j+1>m)
        m=i-j+1;
    }

    return m;
}
