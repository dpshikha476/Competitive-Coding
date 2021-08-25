    string reorganizeString(string s) 
    {
        unordered_map<char,int> m;
        int i,ma=0;
        
        for(i=0;i<s.length();i++)
        {
            m[s[i]]++;
            ma=max(ma,m[s[i]]);
        }    
        
        if(ma>s.length()-ma+1)
            return "";
        
        priority_queue<pair<int,char>> q;
        
        for(auto it=m.begin();it!=m.end();it++)
            q.push(make_pair(it->second,it->first));
        
        string r="";
        
        while(q.size()>1)
        {
            pair<int,char> x=q.top();
            q.pop();
            pair<int,char> y=q.top();
            q.pop();
            
            r+=x.second;
            r+=y.second;
            
            x.first=x.first-1;
            y.first=y.first-1;
            
            if(x.first>0)
                q.push(make_pair(x.first,x.second));
            
            if(y.first>0)
                q.push(make_pair(y.first,y.second));
                
        }
        
        if(q.size())
        {
            if(q.top().first==1)
                r+=q.top().second;
            
            else
                return "";
        }
        
        return r; 
    }