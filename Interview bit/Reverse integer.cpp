int Solution::reverse(int A) 
{
   int sign=1, rem, B=0;
    
    if(A<0) sign=-1;
    A*=sign;
    while(A>0)
    {
        rem = A%10;
        if(B >INT_MAX/10 - rem) 
        return 0;
        B = B*10 + rem;
        A/=10;
    }
    return B*sign;

}