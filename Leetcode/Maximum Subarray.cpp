    int maxSubArray(vector<int>& a) 
    {
        int i, ma=INT_MIN,s=0;
        
        for(i=0;i<a.size();i++)
        {
            s+=a[i];
            
            ma=max(ma,s);
            
            if(s<0)
                s=0;
        }
        
        return ma;
        
    }