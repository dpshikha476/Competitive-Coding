vector <int> countDistinct (int a[], int n, int k)
    {
        
        vector<int> v;
        map<int,int> s;
        
        for (int i = 0; i < k; i++)
        {
            if(s.count(a[i])==0)
                s[a[i]]=1;
                else
                s[a[i]]++;
        }
        
        v.push_back(s.size()); 
        int c= s.size();
        for (int i = k; i < n; i++)
        {
            if(s[a[i-k]]==1)
            c--;
             
            s[a[i-k]]--;
            
            if(s[a[i]]==0)
            c++;
            
            s[a[i]]++;
            
            v.push_back(c);    
        }
        
        return v;
    }