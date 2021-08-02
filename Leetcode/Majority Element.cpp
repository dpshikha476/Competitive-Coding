    int majorityElement(vector<int>& a) 
    {
        int i,n=a.size(),ans;
        unordered_map<int,int> m;
        
        for(i=0;i<n;i++)
        {
            m[a[i]]++;
            
            if(m[a[i]]>n/2)
            {
                ans=a[i];
                break;
            }
        }
        
        return ans;
        
    }