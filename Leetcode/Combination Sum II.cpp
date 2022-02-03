 void solve(int i, int n,int t,vector<int> a,vector<int> v,set<vector<int>> &s)
    {
        if(t==0)
        {
            s.insert(v);
            return;
        }
        
        for(int j=i;j<n;j++)
        {
            if(j>i && a[j]==a[j-1])
                continue;
            if(a[j]>t)
                return;
            v.push_back(a[j]);
            solve(j+1,n,t-a[j],a,v,s);
            v.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& a, int t) 
    {
        sort(a.begin(),a.end());
        vector<vector<int>> ans;
        set<vector<int>> s;
        vector<int> v;
        
        solve(0,a.size(),t,a,v,s);
        
        for(auto it:s)
        {
            ans.push_back(it);
        }
        
        return ans;
        
    }