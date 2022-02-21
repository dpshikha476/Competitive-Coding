    int maxEvents(int start[], int end[], int n) 
    {
        vector<pair<int,int>> v;
        unordered_set<int> s;
        
        for(int i=0;i<n;i++)
            v.push_back({start[i],end[i]});
        
        sort(v.begin(),v.end());
        
        for(int it=v.size()-1;it>=0;it--)
        {
            int i=v[it].first;
            int j=v[it].second;
            
            if(s.find(j)==s.end())
            {
                s.insert(j);
            }
            else
            {
                while(j>=i)
                {
                   if(s.find(j)==s.end()) 
                    {
                        s.insert(j);
                        break;
                    }
                    j--;
                }
            }
        
        }
        
        return s.size();
       
    }