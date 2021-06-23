int minValue(string s, int k)
    {
        int b[26]={0},i,ans=0;
        if(k==s.length())
        return 0;
        
        for(i=0;i<s.length();i++)
        b[s[i]-'a']++;
        
        priority_queue<int> q;
        
        for(i=0;i<26;i++)
        {
            q.push(b[i]);
        }
        
        while(k--)
        {
            int temp=q.top();
            q.pop();
            q.push(temp-1);
        }
        
        while(!q.empty())
        {
            int temp=q.top();
            q.pop();
            ans+=temp*temp;
        }
        
        return ans;
    }