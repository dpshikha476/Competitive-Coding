int Solution::pow(int x, int n, int d) 
{
    if(d == 1) 
    return 0;
    if(x == 0) 
    return 0;
    long long int ans = 1, y = x%d;
    
    while(n>0)
    {
        if(n&1) ans = ((ans) * y)%d;
        y = (y*y) % d;
        if(y<0) 
        y+=d;
        
        n=n>>1; 
    }
    if(ans < 0)
    {
        ans = (d - abs(ans) % d);
        return ans;
    }

    return ans;

}