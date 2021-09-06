vector<int> countEleLessThanOrEqual(int a1[], int a2[], 
                                 int m, int n)
    {
        vector<int> v;
        int i,l,r,mid;
        sort(a2,a2+n);
        
        for(i=0;i<m;i++)
        {
            l=0;
            r=n-1;
            while(l<=r)
            {
                mid=(r-l)/2+l;
                if(a2[mid]<=a1[i])
                l=mid+1;
                else
                r=mid-1;
                
            }
            
            v.push_back(r+1);
            
        }
        
        return v;
         
    }