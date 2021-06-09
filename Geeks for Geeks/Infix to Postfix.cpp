    int pref(char ch)
    {
        if(ch=='^')
        return 3;
        
        else if(ch=='*' || ch=='/')
        return 2;
        
        else if(ch=='+' || ch=='-')
        return 1;
        
        else
        return -1;
    }
    
    string infixToPostfix(string s)
    {
        stack<char> st;
        int i;
        string r;
        
        for(i=0;i<s.length();i++)
        {
            char h=s[i];
            
            
            if((h>='a' && h<='z') || (h>='A' && h<='Z') || (h>='0' && h<='9'))
                r+=h;
            
            else if(h=='(')
                st.push('(');
            
            else if(h==')')
            {
                while(!st.empty() && st.top()!='(')
                {
                    char t=st.top();
                    st.pop();
                    r+=t;
                }
                st.pop();
            }
            
            else
            {
                while(!st.empty() && pref(h) <= pref(st.top()))
                {
                    char t=st.top();
                    st.pop();
                    r+=t;
                }
                
                st.push(h);
            }
        }
        
        
        while(!st.empty())
        {
            char t=st.top();
            st.pop();
            r+=t;
        }
        
        return r;
    }