int findJudge(int n, vector<vector<int>>& t) 
    {
        if(t.size()==0 && n==1)
            return 1;
        
        unordered_map<int,int> m;
        unordered_set<int> s;
        int i;
        
        for(auto it:t)
        {
            int x=it[1];
            m[x]++;   
            
            if(s.find(it[0])==s.end())
                s.insert(it[0]);
        }
        
        for(i=1;i<=n;i++)
        {
            if(m.find(i)!=m.end())
            {
                if(m[i]==n-1 && s.find(i)==s.end())
                return i;
            }
        }
        
        return -1;
        
        
    }