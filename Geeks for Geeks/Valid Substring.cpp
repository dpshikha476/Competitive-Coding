 int findMaxLen(string s) 
    {
        int i,c=0,m=0,t;
        stack<int> st;
         st.push(-1);
        for(i=0;i<s.length();i++)
        {
           if(s[i]=='(')
           st.push(i);
          else
          {
              if(!st.empty())
              st.pop();
              
              if(!st.empty())
              m=max(m,i-st.top());
              
              else
              st.push(i);
          }
        }
        
        return m;
    }