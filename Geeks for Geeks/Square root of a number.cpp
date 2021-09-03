long long int floorSqrt(long long int x) 
{
    for(int i=x;i>=1;i--)
    {
        int d=sqrt(i);
        if(i==d*d)
        return d;
    }
}