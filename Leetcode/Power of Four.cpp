bool isPowerOfFour(int n) 
    {
        if(n==0)
            return false;
        
        if(n==1)
            return true;
        
        if(n%2!=0 || n%4!=0)
            return false;
        
        if(isPowerOfFour(n/4))
        return true;
        
        return false;
        
    }