int Solution::solve(int a, int b, int c, int d) 
{
    if(a==b && b==c && c==d)
    return false;

    if(a==b && d==c)
    return true;

    if(a==d && b==c)
    return true;

    if(a==c && b==d)
    return true;

    return false;
}
