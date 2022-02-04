    void solve(int ind, int n, vector<string> &v, vector<vector<string>> &ans, vector<int> &left, vector<int> &upd, vector<int> &dd)
    {
        if(ind==n)
        {
            ans.push_back(v);
            return;
        }
        
        for(int i=0;i<n;i++)
        {
            if(left[i]==0 && upd[n-1+ind-i]==0 && dd[i+ind]==0)
            {
                left[i]=1;
                upd[n-1+ind-i]=1;
                dd[i+ind]=1;
                v[i][ind]='Q';
                
                solve(ind+1,n,v,ans,left,upd,dd);
                
                v[i][ind]='.';
                left[i]=0;
                upd[n-1+ind-i]=0;
                dd[i+ind]=0;
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) 
    {
        vector<vector<string>> ans;
        vector<string> v;
        vector<int> left(n,0);
        vector<int> upd(2*n -1,0);
        vector<int> dd(2*n -1,0);
        
        string s="";
        for(int i=0;i<n;i++)
            s=s+".";
        for(int i=0;i<n;i++)
            v.push_back(s);
        
        solve(0,n,v,ans,left,upd,dd);
        
     