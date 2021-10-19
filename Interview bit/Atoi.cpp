int Solution::atoi(const string a) 
{
    long n=0;
    int i=0,l=a.length(),f=1;

    for(i=0;i<l;i++)
    {
        if(a[i]>='0' && a[i]<='9')
        {
            n=n*10+ a[i]-'0';

            if(n*f>INT_MAX)
            return INT_MAX;
            else if(n*f<INT_MIN)
            return INT_MIN;
        }
        else if(a[i]=='+' || a[i]=='-')
        {
            if(a[i]=='-')
            f=-1;
        }

        else
        return n*f;
    }

    return n*f;
}