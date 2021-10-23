int Solution::solve(vector<int> &a, int b) 
{
    sort(a.begin(),a.end());
    int i=0,j=1,n=a.size(),d=0;

    while(i<n && j<n)
    {
        d=a[j]-a[i];

        if(i!=j && d==b)
        return 1;

        else if(d<b)
        j++;
        else
        i++;
    }

    return 0;
}