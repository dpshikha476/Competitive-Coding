void solve(vector<int> a,int i,int n,vector<int> v, set<vector<int>> &ans)
    {
        if(i>=n)
        {
            sort(v.begin(),v.end());
            ans.insert(v);
            v.clear();
            return;
        }
        
        v.push_back(a[i]);
        solve(a,i+1,n,v,ans);
        
        v.pop_back();
        sort(v.begin(),v.end());
        ans.insert(v);
   
        solve(a,i+1,n,v,ans);
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& a) 
    {
       set<vector<int>> ans;
        vector<int> v;
        int n=a.size();
        vector<vector<int>> ans1;
        solve(a,0,n,v,ans);
        
        for(auto it:ans)
        {
            ans1.push_back(it);
        }
        return ans1;
    }