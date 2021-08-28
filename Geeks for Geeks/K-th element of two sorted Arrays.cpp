    int kthElement(int a1[], int a2[], int n, int m, int k)
    {
        int i,c=0;
        priority_queue<int, vector<int>, greater<int> > q;
        
        for(i=0;i<n;i++)
        {
            q.push(a1[i]);
        }
        
        for(i=0;i<m;i++)
        {
            q.push(a2[i]);
        }
        
        c=k-1;
        
        while(c--)
        q.pop();
        
        return q.top();
        
        
    }