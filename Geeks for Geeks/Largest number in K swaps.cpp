    void solve(int ind, int n,int k, string &s, string &ans)
    {
        if(k==0)
            return;
        
        char m=s[ind];
        for(int i=ind+1;i<n;i++)
        {
            if(s[i]>m)
            {
                m=s[i];
            }
        }
        
        if(m!=s[ind])
        k--;
        
        for(int i=n-1;i>=ind;i--)
        {
            if(s[i]==m)
            {
                swap(s[i],s[ind]);
                if(ans<s)
                ans=s;
                
                solve(ind+1,n,k,s,ans);
                swap(s[i],s[ind]);
            }
        }
        
    }
    
    string findMaximumNum(string s, int k)
    {
        string ans=s;
        solve(0,s.length(),k,s,ans);
        
        return ans;
    }