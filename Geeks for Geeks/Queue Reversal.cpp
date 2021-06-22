queue<int> rev(queue<int> q)
{
    stack<int> s;
    
    while(!q.empty())
    {
        int t=q.front();
        q.pop();
        s.push(t);
    }
    
    while(!s.empty())
    {
        int t=s.top();
        s.pop();
        q.push(t);
    }
    
    return q;
}