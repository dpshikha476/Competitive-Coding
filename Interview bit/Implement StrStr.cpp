int Solution::strStr(const string a, const string b) 
{
    int i=0,j=0,k,n=a.length(),m=b.length();

    if(n==0 || m==0)
    return -1;

    for(i=0;i<n;i++)
    {
        k=i;
        j=0;
        while(a[k]==b[j])
        {
            if(j==m-1)
            return i;

            k++;
            j++;
        }
    }

    return -1;

}
