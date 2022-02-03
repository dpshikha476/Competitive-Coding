void solve(vector<int> a, int i, int n,vector<int> &ans, int sum)
    {
        if(i>=n)
        {
            ans.push_back(sum);
            return;
        }
        
        solve(a,i+1,n,ans,sum+a[i]);
        solve(a,i+1,n,ans,sum);
    }

    vector<int> subsetSums(vector<int> a, int n)
    {
        vector<int> ans;
        
        solve(a,0,n,ans,0);
        
        return ans;
    }