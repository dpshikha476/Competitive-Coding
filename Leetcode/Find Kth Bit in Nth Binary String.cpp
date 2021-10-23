    int find(int n, int k)
    {
        if(n==1 && k==1)
            return 0;
        
        int m= pow(2,n)-1;
            
        if(k==m/2+1)
            return 1;
        
        else if(k<=m/2)
            return find(n-1,k);
        else
            return !find(n-1,m-k+1);
    }
    
    char findKthBit(int n, int k)
    {
        int c=find(n,k);
        
        return c+'0';
    }