    string minRemoveToMakeValid(string s) 
    {
        stack<pair<char,int>> st;
        int i,j=0;
        string r="";
        
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='(')
                st.push({'(',i});
            
            else if(s[i]==')')
            {
                if(!st.empty() && st.top().first=='(')
                    st.pop();
                else
                    st.push({')',i});
            }            
        }
        
        while(!st.empty())
        {
             s.erase(s.begin() + st.top().second);
             st.pop();
        }
        
        return s;
    }