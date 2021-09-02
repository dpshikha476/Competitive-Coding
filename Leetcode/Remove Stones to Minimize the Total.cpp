int minStoneSum(vector<int>& piles, int k) 
    {
        priority_queue<int> q;
        int s=0;
        
        for(int i=0;i<piles.size();i++)
            q.push(piles[i]);
        
        while(k--)
        {
            int t=q.top();
            q.pop();    
            q.push(t-floor(t/2));
        }
        
        while(!q.empty())
        {
            int t=q.top();
            q.pop();
            s+=t;
        }
        
        return s;
        
    }