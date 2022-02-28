int minCost(string s, vector<int>& a) 
    {
        int l=s.length(),ans=0,i=0;

        while(i<l-1)
        {
            int j=i+1;
            while(s[i]==s[j])
            {
                ans+=min(a[i],a[j]);
                if(a[i]<a[j])
                {
                    i=j;
                    j++;
                }
                else
                    j++;
            }
            i=j;
        }
        
        return ans;
    }