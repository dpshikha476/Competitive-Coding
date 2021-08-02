 vector<int> runningSum(vector<int>& nums) 
    {
        vector<int> v;
        
        for(int i=0;i<nums.size();i++)
        {
            if(i!=0)
                nums[i]+=nums[i-1];
            v.push_back(nums[i]);
        }
        
        return v;
    }