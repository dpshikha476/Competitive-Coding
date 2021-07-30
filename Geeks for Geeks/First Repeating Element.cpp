    int firstRepeated(int a[], int n) 
    {
        unordered_map<int,int> m;
        
        int i,ans=INT_MAX;
        
        for(i=0;i<n;i++)
        {
            if(m.find(a[i])==m.end())
            m[a[i]]=i+1;
            else
            {
                ans=min(ans,m[a[i]]);
            }
        }
        
        if(ans!=INT_MAX)
        return ans;
        
        return -1;
        
    }