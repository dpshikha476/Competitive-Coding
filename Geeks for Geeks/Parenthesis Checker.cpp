    bool ispar(string x)
    {
        int i;
        stack<char> s;
        
        for(i=0;i<x.length();i++)
        {
            if(x[i]=='{' || x[i]=='(' || x[i]=='[')
            s.push(x[i]);
            
            else
            {
                if(s.empty())
                return false;
                
                else if(x[i]=='}')
                {
                    if(s.top()=='{')
                    s.pop();
                    else
                    return false;
                }
                
                else if(x[i]==')')
                {
                    if(s.top()=='(')
                    s.pop();
                    else
                    return false;
                }
                
                else if(x[i]==']')
                {
                    if(s.top()=='[')
                    s.pop();
                    else
                    return false;
                }
                
            }
            
        }
        
        if(s.empty())
        return true;
        
        return false;
    }