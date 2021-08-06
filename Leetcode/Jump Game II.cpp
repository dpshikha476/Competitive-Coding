    int jump(vector<int>& a) 
    {
        int i,m,c=0,n=a.size(),l=0,r=0;
        
        while(r<n-1)
        {
            m=INT_MIN;
            
            for(i=l;i<=r;i++)
            {
                m=max(m,i+a[i]);
            }
            
            l=r+1;
            r=m;
            c++;
        }
        
        return c;
        
    }