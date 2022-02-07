    void solve(int ind,int n,int tar,vector<int> &v,vector<vector<int>> &ans, vector<int> &a)
    {
        if(tar==0)
        {
            ans.push_back(v);
            return;
        }
        
        if(ind>=n)
            return;
        
        if(a[ind]<=tar)
        {
            v.push_back(a[ind]);
            solve(ind,n,tar-a[ind],v,ans,a);
            v.pop_back();
        }
        
        solve(ind+1,n,tar,v,ans,a);
    }
    
    vector<vector<int>> combinationSum(vector<int> &a, int b) 
    {
        vector<vector<int>> ans;
        vector<int> v;
        
        sort(a.begin(),a.end());
        a.erase(unique(a.begin(), a.end()), a.end());
        
        solve(0,a.size(),b,v,ans,a);

        return ans;
    }