 int evaluatePostfix(string s)
    {
        int i;
        stack<int> st;
        
        for(i=0;i<s.length();++i)
        {
            char c=s[i];
            if(c>='0' && c<='9')
            st.push(c-'0');
            
            else
            {
                char a=st.top();
                st.pop();
                char b=st.top();
                st.pop();
                switch (c) 
                { 
                case '+': st.push(b + a); break; 
                case '-': st.push( b - a); break; 
                case '*': st.push(b * a); break; 
                case '/': st.push(b/a); break; 
                } 
            }
        }
        
        return st.top();
    }
    