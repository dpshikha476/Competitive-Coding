    int getPairsCount(int a[], int n, int k) 
    {
        int i,c=0;
        unordered_multimap <int, int>v;
         
        
        for(i=0;i<n;i++)
        {
            if(v.find(a[i])==v.end())
            v.insert(make_pair(a[i],1));
            else
            {
                 unordered_multimap <int, int>::iterator it= v.find(a[i]);
                 it->second= it->second+1;
            }
        }
        
        for(i=0;i<n;i++)
        {
            if(v.find(k-a[i])!=v.end())
            {
                unordered_multimap <int, int>::iterator it= v.find(k-a[i]);
                c+=it->second;
            }
            
            if (k - a[i] == a[i])
                c--;
        }
        
        return c/2;
       
        
    }