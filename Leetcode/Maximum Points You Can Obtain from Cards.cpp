   int maxScore(vector<int>& a, int k) 
    {
        int i=0,ans=INT_MIN,n,x;
        n=a.size();
        
        int b[n];
        b[0]=a[0];
        
        for(i=1;i<n;i++)
        {
           b[i]=a[i]+b[i-1];
        }
        
       if(n-k==0)
           ans=b[n-1];
       else
        ans=b[n-1]-b[n-k-1];
        
        for(i=k-1;i>=0;i--)
        {
            x=(b[n-1]-b[n-i-1])+b[k-i-1];
            ans=max(ans,x);
        }
        
        return ans;
    }
