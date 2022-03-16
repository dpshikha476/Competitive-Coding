 vector<vector<int>> fourSum(vector<int> &a, int t) 
    {
        int n=a.size();
        vector<vector<int>> ans;
        set<vector<int>> s;
        sort(a.begin(),a.end());
        
        for(int i=0;i<n-3;i++)
        {
            for(int j=i+1;j<n-2;j++)
            {
                int start=j+1;
                int end=n-1;
                while(start<end)
                {
                    if(a[i]+a[j]+a[start]+a[end]==t)
                    {
                        s.insert({a[i],a[j],a[start],a[end]});
                        start++;
                        end--;
                    }
                    else if(a[i]+a[j]+a[start]+a[end]<t)
                    start++;
                    else
                    end--;
                }
            }
        }
        
        for(auto it=s.begin();it!=s.end();it++)
            ans.push_back(*it);
            
        return ans;
    }