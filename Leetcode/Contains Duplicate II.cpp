bool containsNearbyDuplicate(vector<int>& nums,int k) 
    {
        std::unordered_map<int, int> data;
        for (int i = 0; i < nums.size(); i++) 
        {
            const auto it = data.find(nums[i]);
            if (it != data.end() && i - it->second <= k) 
            {
                return true;
            }
            data[nums[i]] = i;
        }
        return false;
    }