long long getMaxArea(long long a[], int n)
    {
        stack<long long> s;
        int i=0,t;
        long long m=0,area=0;
        
        while(i<n)
        {
            if(s.empty() || a[s.top()]<=a[i])
            s.push(i++);
            else
            {
                t=s.top();
                s.pop();
                area=a[t]*(s.empty()?i:i-s.top()-1);
            }
            
            if(area>m)
            m=area;
        }
        
        while(!s.empty())
        {
            
            t=s.top();
            s.pop();
            area=a[t]*(s.empty()?i:i-s.top()-1);
            
            if(area>m)
            m=area;
        }
        
        return m;
    }