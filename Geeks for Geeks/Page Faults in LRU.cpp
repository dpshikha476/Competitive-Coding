int pageFaults(int n, int c, int p[])
    {
        int ans=0;
        unordered_map<int,int> m;
        
        for(int i=0;i<n;i++)
        {
            if(m.find(p[i])==m.end())
            {
                ans++;
                if(m.size()<c)
                {
                    m[p[i]]=i;
                }
                else
                {
                    int min=INT_MAX,key=-1;
                    for(auto it:m)
                    {
                        if(it.second<min)
                        {
                            min=it.second;
                            key=it.first;
                        }
                    }
                    
                    m.erase(key);
                    m[p[i]]=i;
                }
            }
            else
                m[p[i]]=i;
        }
        
        return ans;
    }