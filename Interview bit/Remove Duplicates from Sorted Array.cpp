int Solution::removeDuplicates(vector<int> &a) 
{
    int i=0,j=0,n=a.size();

    for(i=0;i<n-1;)
    {
        j=i+1;
        while(j<n && a[j]==a[i])
        {
            a[j]=INT_MAX-1;
            j++;
        }

        i=j;

    }

    sort(a.begin(),a.end());

    for(i=a.size()-1;i>=0;i--)
    {
        if(a[i]!=INT_MAX-1)
        return i+1;
    }

    return i+1;
}
