    int subarraySum(vector<int>& a, int k) 
    {
        int i,j,s=0,c=0,n=a.size();
        
        unordered_map<int,int> m;
        
        m[0]=1;
       
        for(i=0;i<n;i++)
        {
            s+=a[i];
            
            if(m.find(s-k)!=m.end())
                c+=m[s-k];
            
            m[s]++;
            
        }
        
        return c;
        
    }