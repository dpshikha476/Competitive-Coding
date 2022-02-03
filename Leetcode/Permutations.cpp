 void solve(int ind,int n,vector<int> v, vector<vector<int>> &ans, vector<int> a)
    {
        if(ind==n)
        {
            ans.push_back(v);
            return;
        }
        
        for(int i=ind;i<n;i++)
        {
            swap(v[i],v[ind]);
            solve(ind+1,n,v,ans,a);
        }
    }
    
    vector<vector<int>> permute(vector<int>& a) 
    {
        vector<vector<int>> ans;
        vector<int> v;
        
        for(auto it:a)
        {
            v.push_back(it);
        }
        solve(0,a.size(),v,ans,a);
        
        return ans;
    }