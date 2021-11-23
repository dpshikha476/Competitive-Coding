long t[100001],m=1000000007;
    
    long count(long n)
    {
        if(t[n]!=-1)
        return t[n];
        
        if(n>2)
        return t[n]=((count(n-1)%m)+(((n-1)%m) * (count(n-2)%m))%m)%m;
        else
        return t[n]=n%m;
    }
    
    long countFriendsPairings(long n) 
    { 
        memset(t,-1,sizeof(t));
        
        return count(n);
        
    }