 void push(int x) 
    {
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() 
    {
        if(s1.empty())
           return 0;
        
        int a=s1.top();
        s1.pop();
        return a;
        
    }
    
    /** Get the front element. */
    int peek() 
    {
       if(s1.empty())
           return 0;
        
        int a=s1.top();
        return a;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() 
    {
        return s1.empty();   
    }