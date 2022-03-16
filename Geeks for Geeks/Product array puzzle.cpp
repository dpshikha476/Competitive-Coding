 vector<long long int> productExceptSelf(vector<long long int>& a, int n) 
    {
        vector<long long int> ans;
        long long int zeroes=0;
        long long int i,p=1;
        
        for(i=0;i<n;i++)
        {
            if(a[i]!=0)
                p=p*a[i];
            else
                zeroes++; 
        }
        
        for(i=0;i<n;i++)
        {
            if(a[i]!=0 && zeroes==0)
            ans.push_back(p/a[i]);
            else if(a[i]!=0 && zeroes>0)
            ans.push_back(0);
            else if(a[i]==0 && zeroes>1)
            ans.push_back(0);
            else if(a[i]==0 && zeroes==1)
            ans.push_back(p);
        }
        
        return ans;
    }