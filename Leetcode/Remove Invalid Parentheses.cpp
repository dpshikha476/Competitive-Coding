 int removals(string s)
    {
        stack<char> st;
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
                st.push(s[i]);
            else if(s[i]==')')
            {
                if(!st.empty() && st.top()=='(')
                    st.pop();
                else
                    st.push(')');
            }
        }

        return st.size();
    }
    
    void solve(int k,string s,vector<string> &ans,unordered_map<string,bool> &mp)
    {
        if(mp[s])
            return;
        
        mp[s]=true;
        
        if(k==0)
        {
            if(removals(s)==0)
                ans.push_back(s);
            return;
        }
        
        for(int i=0;i<s.length();i++)
        {
            string r=s.substr(0,i)+s.substr(i+1);
            
            solve(k-1,r,ans,mp);
        }
        
        return;
    }
    
    vector<string> removeInvalidParentheses(string s) 
    {   
        int k=removals(s);
        
        unordered_map<string,bool> mp;
        vector<string> ans;
        
        solve(k,s,ans,mp);
        
        return ans;
    }