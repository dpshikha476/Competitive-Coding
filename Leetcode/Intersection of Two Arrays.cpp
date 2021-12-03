vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        unordered_map<int, int> count;
        vector<int> ans;
        for(auto it:nums1)
        {
            count[it]++;
        }
        
        for(auto it:nums2)
        {
            if(count[it])
            {
                ans.push_back(it); 
                count[it] = 0;
            }
        }
        
        return ans;
    }