string secFrequent (string a[], int n)
    {
        int i,ma=0,maxi=0;
        string s;
        unordered_map<string ,int> m;
        
        for(i=0;i<n;i++)
        {
            m[a[i]]++;
            int x=m[a[i]];
            ma=max(ma,x);
        }
        
        for(auto it=m.begin();it!=m.end();it++)
        {
            if(it->second!=ma)
            {
                if(it->second>maxi)
                {
                    maxi=it->second;
                    s=it->first;
                }
            }
        }
        
        return s;
    }