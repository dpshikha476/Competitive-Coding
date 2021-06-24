    bool knows(vector<vector<int> >& m, int a, int b)
    {
        return m[a][b];
    }
    
    int celebrity(vector<vector<int> >& m, int n) 
    {
         stack<int> s;
         int i,a,b,c;
         for(i=0;i<n;i++)
         s.push(i);
         
         while(s.size()>1)
         {
             int a=s.top();
             s.pop();
             int b=s.top();
             s.pop();
             
             if(knows(m,a,b))
             s.push(b);
             else
             s.push(a);
         }
         
         if(s.empty())
         return -1;
         
         c=s.top();
         s.pop();
         
        for(i=0;i<n;i++)
        {
            if(i!=c && (!knows(m,i,c) || knows(m,c,i)))
            return -1;
        }
        
        return c;
         
    }