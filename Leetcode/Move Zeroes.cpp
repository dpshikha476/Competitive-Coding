    void moveZeroes(vector<int>& nums) 
    {
        vector<int> v;
        int i,c=0;
        
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
                v.push_back(nums[i]);
            else
                c++;
        }
        
        for(i=0;i<v.size();i++)
        {
            nums[i]=v[i];
        }
        
        for(;i<c+v.size();i++)
        {
            nums[i]=0;
        }
        
    }