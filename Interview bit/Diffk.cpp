int Solution::diffPossible(vector<int> &a, int b) 
{
    int i=0,j=1,n=a.size();
    
    while(i<n && j<n)
    {
        if(a[j]-a[i]==b && i!=j)
        return 1;

        else if(a[j]-a[i]>b)
        i++;
        else
        j++;
    }

    return 0;
}