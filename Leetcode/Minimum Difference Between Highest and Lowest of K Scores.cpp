int minimumDifference(vector<int>& a, int k) 
    {
        sort(a.begin(),a.end());
        
        int i,ans=INT_MAX,n=a.size();
        
        for(i=0;i<n-k+1;i++)
        {
           ans=min(a[k+i-1]-a[i],ans); 
        }
        
        return ans;
        
    }