 bool searchMatrix(vector<vector<int>>& a, int t) 
    {
        int i,s=a.size(),j;
        int l=0,r=s-1,m,n=0;
        
        n=a[0].size();
        
        while(l<=r)
        {
            m=(r-l)/2+l;
            
            if(t>a[m][n-1])
                l=m+1;
            else if(t<a[m][0])
                r=m-1;
            else if(t>=a[m][0] && t<=a[m][n-1])
            {
                for(int i=0;i<n;i++)
                    if(a[m][i]==t)
                        return true;
                
                return false;
            }
        }
        
        
        return false;
        
        
    }