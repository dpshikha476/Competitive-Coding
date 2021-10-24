int searchInsert(vector<int>& a, int t) 
    {
        int l=0,r=a.size()-1,m,ans=-1;
        
        while(l<=r)
        {
            m=(r-l)/2+l;
            
            if(a[m]==t)
            {
                ans=m;
                return ans;
            }
            else if(a[m]<t)
            {
                ans=m;
                l=m+1;
            }
            else if(a[m]>t)
                r=m-1;
        }
        
        return ans+1;
    }