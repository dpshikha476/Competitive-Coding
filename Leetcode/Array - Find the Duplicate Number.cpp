    int findDuplicate(vector<int>& nums) 
    {
        long long int i,n;
        n=nums.size();
        long long int b[30001]={0};
        
        for(i=0;i<n;i++)
        {
            b[nums[i]]++;
        }
        
        for(i=0;i<n+1;i++)
        {
            if(b[i]>1)
               break;
        }
        return i;
    }