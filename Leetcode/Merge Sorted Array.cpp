   void merge(vector<int>& n1, int n, vector<int>& n2, int m) 
    {
        int i=0,j=0;
        vector<int> v;
        
        while(i<n && j<m)
        {
            if(n1[i]<n2[j])
            {
                v.push_back(n1[i]);
                i++;
            }
            else
            {
                v.push_back(n2[j]);
                j++; 
            }
        }
        
        while(i<n)
        {
            v.push_back(n1[i]);
            i++;
        }
        
        while(j<m)
        {
             v.push_back(n2[j]);
             j++;
        }
        
        n1.clear();
        
        for(i=0;i<v.size();i++)
        {
            n1.push_back(v[i]);
        }
        
        for(i=0;i<n2.size();i++)
        {
            n2[i]=0;
        }
        
    }