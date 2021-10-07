    stack<int> s;
    stack<int> q;
    
    MinStack() 
    {
        
    }
    
    void push(int val) 
    {
        s.push(val);
        
        if(q.empty() || q.top()>=val)
            q.push(val);
    }
    
    void pop() 
    {
        int x=s.top();
        s.pop();
        
        if(x==q.top())
            q.pop();
    }
    
    int top() 
    {
        return s.top();    
    }
    
    int getMin() 
    {
        if(q.empty())
            return -1;
        
        return q.top();
    }