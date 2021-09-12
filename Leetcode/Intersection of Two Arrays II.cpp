    vector<int> intersect(vector<int>& a, vector<int>& b) 
    {
        vector<int> v;
        int i,c[1001]={0},d[1001]={0};
        
        for(i=0;i<a.size();i++)
          c[a[i]]++;
        
        for(i=0;i<b.size();i++)
          d[b[i]]++;
        
        for(i=0;i<1001;i++)
        {
            if(c[i]!=0 && d[i]!=0)
            {
                int k=min(c[i],d[i]);
                while(k--)
                    v.push_back(i);
            }
        }
        
        return v;
        
    }