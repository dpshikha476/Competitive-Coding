    int minTimeToType(string s) 
    {
        int i,ans,l=s.length();
        ans=l;
        char c='a';
        
        for(i=0;i<l;i++)
        {
            int d=abs(s[i]-c);
            c=s[i];
            ans+=min(abs(26-d),d);
        }
        
        return ans;
        
    }