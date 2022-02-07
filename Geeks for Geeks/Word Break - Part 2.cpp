bool isavail(int i, int j,string s,vector<string> dict)
    {
        if(find(dict.begin(), dict.end(), s.substr(i,j-i+1))==dict.end())
        return false;
        
        return true;
    }

    void solve(int ind,int n, string s,vector<string> dict,vector<string> &v,vector<string> &ans)
    {
        if(ind==n)
        {
            string a="";
            for(auto it:v)
            {
                if(a!="")
                a=a+" "+it;
                else
                a=it;
            }
            
            ans.push_back(a);
            return;
        }
        
        for(int i=ind;i<n;i++)
        {
            if(isavail(ind,i,s,dict))
            {
                v.push_back(s.substr(ind,i-ind+1));
                solve(i+1,n,s,dict,v,ans);
                v.pop_back();
            }
        }
    }

    vector<string> wordBreak(int n, vector<string>& dict, string s)
    {
       vector<string> ans;
       vector<string> v;
       int l=s.length();
       solve(0,l,s,dict,v,ans);
       
       return ans;
    }