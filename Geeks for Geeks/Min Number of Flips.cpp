int minFlips (string s)
{
    int i,c=0,d=0,n=s.length();
    
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            if(s[i]=='1')
            c++;
        }
        else
        {
            if(s[i]=='0')
            c++;
        }
    }
    
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            if(s[i]=='0')
            d++;
        }
        else
        {
            if(s[i]=='1')
            d++;
        }
    }
    
    return min(c,d);
    
}