int Solution::firstMissingPositive(vector<int> &a) 
{
    int i=0,j=1;
    sort(a.begin(),a.end());

    while(a[i]<=0)
    i++;

    for(;i<a.size();i++)
    {
        if(a[i]!=j)
        return j;

        j++;
    }

    return j;
}
