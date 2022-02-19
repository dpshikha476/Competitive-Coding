static bool compare( pair<int,int> &a, pair<int,int> &b)
    {
        if(a.second<b.second)
        return true;
        
        if(a.second > b.second) 
        return false;
        
        return a.first < b.first;
    }
    
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int,int>> v;
        
        for(int i=0;i<n;i++)
            v.push_back({start[i],end[i]});
            
        sort(v.begin(),v.end(), compare);
        
        int j=0,c=1;
        
        for(int i=1;i<n;i++)
        {
            if(v[i].first>v[j].second)
            {
                j=i;
                c++;
            }
        }
        
        return c;
    }