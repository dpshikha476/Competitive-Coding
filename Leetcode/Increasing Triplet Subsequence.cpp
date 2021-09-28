  
    int lower(set<int> &s, int n)
    {
        auto it=s.lower_bound(n);
        it--;
        
        return *it;
    }
    
    bool increasingTriplet(vector<int>& a) 
    {
        int i,j,n=a.size(),b[n];
        set<int> s;
        s.insert(a[0]);
        
        b[n-1]=a[n-1];
        for(i=n-2;i>=0;i--)
        b[i]=max(a[i],b[i+1]);
        
        for(i=1;i<n-1;i++)
        {
            if(b[i+1]>a[i])
            {
                if(lower(s,a[i])<a[i])
                    return true;
            }
            
            s.insert(a[i]);
        }
        
        return false;
    }