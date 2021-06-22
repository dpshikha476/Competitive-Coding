queue<int> modifyQueue(queue<int> q, int k)
{
    stack<int> s;
    queue<int> q1;
    
    while(!q.empty() && k--)
    {
        int t=q.front();
        q.pop();
        s.push(t);
    }
    
    while(!q.empty())
    {
        int t=q.front();
        q.pop();
        q1.push(t);
    }
    
    while(!s.empty())
    {
        int t=s.top();
        s.pop();
        q.push(t);
    }
    
   while(!q1.empty())
   {
        int t=q1.front();
        q1.pop();
        q.push(t);
   }
   
   return q;
}