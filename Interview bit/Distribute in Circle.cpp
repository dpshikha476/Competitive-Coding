int Solution::solve(int a, int b, int c) 
{
    int p= a%b +c -1;

    if(p>b)
    return p%b;

    else if(p==0)
    return b;

    return p;
}
