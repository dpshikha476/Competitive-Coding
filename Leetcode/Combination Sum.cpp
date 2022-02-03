void solve(int i, int n, int sum,int t,vector<int> a,vector<int> v,set<vector<int>> &s)
    {
        if(sum==t)
        {
            sort(v.begin(),v.end());
            s.insert(v);
            return;
        }
        
        if(i>=n || sum>t)
            return;
        
        v.push_back(a[i]);
        solve(i,n,sum+a[i],t,a,v,s);
        
        v.pop_back();
        solve(i+1,n,sum,t,a,v,s);
    }