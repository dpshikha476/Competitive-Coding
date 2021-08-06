    int maxArea(vector<int>& h) 
    {
        int a,ma=INT_MIN,i,j,n=h.size();
        i=0;
        j=n-1;
        
        while(i<j)
        {
            a=(j-i)*min(h[i],h[j]);
                ma=max(ma,a);
            
            if(h[i]<h[j])
                i++;
            else
                j--;
        }
        
        return ma;
        
    }