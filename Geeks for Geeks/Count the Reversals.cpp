int countRev (string s)
{
    int i,n=s.length(),l=0,r=0;
    
    if(n%2!=0) 
        return -1;
        
    for(i=0;i<n;i++)
    {
        if(s[i]=='{')
        l++;
        else
        {
            if(l==0)
            r++;
            else
            l--;
        }
    }
    
    return ceil(l/2.0)+ceil(r/2.0);
}