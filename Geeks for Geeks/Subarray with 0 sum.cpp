 bool subArrayExists(int a[], int n)
    {
        int i,sum=0;
        
        unordered_set<int> s;
        
        for(i=0;i<n;i++)
        {
           
            sum=sum+a[i];
            
            if(sum==0 || s.find(sum)!=s.end())
            return true;
            
            else
            s.insert(sum);
            
        }
        
        return false;
    }