 int threeSumClosest(vector<int>& a, int t) 
    {
        int i,j,k,m=INT_MAX,d,ans,n=a.size();
        sort(a.begin(),a.end());
        
        for(i=0;i<n-2;i++)
        {
            j=i+1;
            k=n-1;
            
            while(j<k)
            {
                d=abs(t-(a[i]+a[j]+a[k]));
                if(d<m)
                {
                    ans=a[i]+a[j]+a[k];
                    m=d;
                }
                
                if(a[i]+a[j]+a[k]>=t)
                k--;
                else
                    j++;
                
            }
            
        }
        
        return ans;
        
    }