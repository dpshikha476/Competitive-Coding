int minimumDays(int s, int n, int m)
    {
        if(s<7)
        {
            if(n<m)
            return -1;
        }
        else
        {
            int tf=n*6;
            int rf=m*7;
            if(tf<rf)
            return -1;
        }
        
        if((s*m)%n==0)
        return (s*m)/n;
        
        return (s*m)/n +1;
    }