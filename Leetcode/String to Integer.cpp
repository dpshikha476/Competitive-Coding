int myAtoi(string s) 
    {
        int i=0,n=s.length(),f=1;
        long x=0;
        
        while(i<n && s[i]==' ')
            i++;
        
        if(s[i]=='-')
        {
            f=-1;
            i++;
        }
        else if(s[i]=='+')
            i++;
            
        
        for(;i<n;i++)
        {
            if(s[i]-'0' >=0 && s[i]-'0' <10)
            {
                 x=x*10 +s[i]-'0';
            
                 if(x*f >INT_MAX)
                    return INT_MAX;

                 else if(x*f < INT_MIN)
                    return INT_MIN;
            }
            else
                break;
        }
        
        return x*f;
    }