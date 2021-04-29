vector<int> subarraySum(int a[], int n, int s)
    {
        int i,k=a[0],j=0;
        
        vector<int> v;
        
        for(i=1;i<=n;i++)
        {
           while(k>s && j<=i-1)
           {
               k=k-a[j];
               j++;
           }
            if(k==s)
            {
                v.push_back(j+1);
                v.push_back(i);
                return v;
            }
            
            else if(k<s)
            k=k+a[i];
            
        }
        
        v.push_back(-1);
        return v;
       
    }