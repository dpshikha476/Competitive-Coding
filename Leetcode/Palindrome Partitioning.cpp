    
    bool ispalin(string s, int i, int j)
    {   
        while(i<=j)
        {
            if(s[i]!=s[j])
                return false;
            i++;
            j--;
        }
        
        return true;
    }
    
    void solve(int ind,int n,string s,vector<string> &v,vector<vector<string>> &ans)
    {
        if(ind==n)
        {
            ans.push_back(v);
            return;
        }
        
        for(int i=ind;i<n;i++)
        {
             if(ispalin(s,ind,i))
             {
                v.push_back(s.substr(ind,i-ind+1));
                solve(i+1,n,s,v,ans);
                v.pop_back();
             }
        }
        
    }
    
    vector<vector<string>> partition(string s) 
    {
        vector<vector<string>> ans;
        vector<string> v;
        int n=s.length();
        solve(0,n,s,v,ans);
        
        return ans;
    }