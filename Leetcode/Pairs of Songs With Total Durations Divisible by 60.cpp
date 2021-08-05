    int numPairsDivisibleBy60(vector<int>& a) 
    {
        int i,j=1,c=0,b[60]={0};
        
        for(i=0;i<a.size();i++)
        {
           if(a[i]%60==0)
               c+=b[0];
           else
               c+=b[60-a[i]%60];
                
            b[a[i]%60]++;
           
        }
        
        return c;
        
    }