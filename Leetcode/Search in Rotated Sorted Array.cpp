 int search(vector<int>& a, int t) 
    {
        int l=0,h=a.size()-1,m;
        
        while(l<=h)
        {
            m=(h-l)/2+l;
            
            if(a[m]==t)
            {
                return m;
            }
            else if(a[l]<=a[m])
            {
                if(t>=a[l] && t<=a[m])
                    h=m-1;
                else
                    l=m+1;
            }
            else
            {
                if(t>=a[m] && t<=a[h])
                    l=m+1;
                else
                    h=m-1;
            }
        }
        
        return -1;
    }