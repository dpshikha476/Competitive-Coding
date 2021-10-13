vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        map<int,int>ma;
        for(int i=0;i<nums.size();i++)
        ma[nums[i]]++;
        
        vector<pair<int,int>>vec;
        
        for(auto i:ma)
        {
            vec.push_back(make_pair(i.second,i.first));
        }
        
        sort(vec.begin(),vec.end(),greater<pair<int,int>>());
        
        vector<int> ans;
        
        for(int i=0;i<k;i++)
        {
            ans.push_back(vec[i].second);
        }
        
        return ans;
    }