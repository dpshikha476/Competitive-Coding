 vector<int> productExceptSelf(vector<int>& a) 
    {
        vector<int> v(a.size(),1);
        int i,p=1;
        
        for(i=0;i<a.size();i++)
        {
            v[i]=p;
            p*=a[i];
        }
        p=1;
        for(i=a.size()-1;i>=0;i--)
        {
            v[i]*=p;
            p*=a[i];
        }
        
        
        
        return v;
        
    }