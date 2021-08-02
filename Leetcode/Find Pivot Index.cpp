    int pivotIndex(vector<int>& a) 
    {
        int i,sum=0,ans=-1,ps=0;
        
        for(i=0;i<a.size();i++)
            sum+=a[i];
        
        for(i=0;i<a.size();i++)
        {
            
            if(sum-a[i]-ps==ps)
            {
                ans=i;
                break;
            }
            
            ps+=a[i];
        }
        
        return ans;
        
    }