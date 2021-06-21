    vector<long long> nextLargerElement(vector<long long> a, int n)
    {
        long long i,t;
        vector<long long> b;
        unordered_map<long long,long long> c;
        stack<long long> s;
        s.push(a[0]);
        for(i=1;i<n;i++)
        {
            if(s.empty())
            {
                s.push(a[i]);
                continue;
            }

            while(!s.empty() && s.top()<a[i])
            {
                c[s.top()]=a[i];
                s.pop();
            }
                
            s.push(a[i]);
                
        }
        
        while (!s.empty()) 
        {
            c[s.top()]=-1;
            s.pop();
        }

        for(i=0;i<n;i++)
        {
            b.push_back(c[a[i]]);
        }
        
        return b;
    }