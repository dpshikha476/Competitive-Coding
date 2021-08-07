vector<vector<int>> merge(vector<vector<int>>& v) 
    {
        vector<vector<int>> m;
        
        sort(v.begin(),v.end());
        
        int i,j;
        stack<pair<int,int>> s;
    
        s.push(make_pair(v[0][0],v[0][1]));
        
        for(i=1;i<v.size();i++)
        {
            if(v[i][0]<=s.top().second)
            {
                pair<int,int> p=s.top();
                p.second=max(p.second,v[i][1]);
                s.pop();
                s.push(make_pair(p.first,p.second));
            }
            else
                s.push(make_pair(v[i][0],v[i][1]));
                
        }
        
        while(!s.empty())
        {
            pair<int,int> p=s.top();
            s.pop();
            m.push_back({p.first,p.second});
        }
        
        return m;
        
    }
