    int countSquares(int n) 
    {
        int i,c=0;
        
        for(i=n-1;i>=0;i--)
        {
            if(floor(sqrt(i))*floor(sqrt(i))==i)
            break;
        }
        
        return c=sqrt(i);
    }