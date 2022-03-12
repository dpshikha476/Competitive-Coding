    int transform (string a, string b)
    {
        int n=a.length(),m=b.length(),i,j,arr[256]={0},ans=0;
        
        if(n!=m)
        return -1;
        
        for(i=0;i<n;i++)
        {
            arr[a[i]]++;
            arr[b[i]]--;
        }
            
            
        for(i=0;i<256;i++)
            if(arr[i]!=0)
                return -1;
              
        i=n-1; j=m-1;  
        while(i>=0 && j>=0)
        {
            if(a[i]!=b[j])
            {
                i--;
                ans++;
            }
            
            else if(i>=0)
            {
                i--;
                j--;
            }
        }
        
        return ans;
    }